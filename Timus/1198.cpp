#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

const int maxn = 2000;

struct Node
{
    int index,low,component;
    bool onStack;
    vector<Node*> v;
};
Node nodes[maxn+1];
stack<Node*> s;
int in[2001];
int index = 1;
int component = 1;

void connect(Node *node){
    node->low = node->index = index++;
    node->onStack = true;
    s.push(node);
    for(auto n: node->v){
        if(!n->index){
            connect(n);
        }
        if(n->onStack){
            node->low = min(node->low,n->low);
        }
    }
    if(node->low == node->index)
    {
        Node* n;
        do
        {
            n = s.top();
            s.pop();
            n->component = component;
            n->onStack = false;
        } while(n != node);
        component++;

    }

}
int dfs(Node* node)
{
    int size = node->index = 1;
    for(auto n : node->v)
        if(!n->index)
            size += dfs(n);
    return size;
}

int main()
{
    ios::sync_with_stdio(false);
    int N, j;
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        while(true)
        {
            cin>>j;
            if(j == 0)
                break;
            nodes[i].v.push_back(&nodes[j]);
        }
    }
    for(int i = 1; i <= N; i++)
        if(!nodes[i].index)
            connect(&nodes[i]);
    for(int i = 1; i <= N; i++)
    {
        nodes[i].index = 0;
        for(auto n : nodes[i].v)
            if(n->component != nodes[i].component)
                in[n->component]++;
    }
    for(int i = 1; i <= N; i++)
    {
        if(in[nodes[i].component] == 0)
        {
            if(dfs(&nodes[i]) == N)
                for(int j = 1; j <= N; j++)
                    if(nodes[j].component == nodes[i].component)
                        cout<<j<<' ';
            printf("0");
            return 0;
        }
    }
}
