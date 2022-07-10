// If you copy paste my solution I will murder you in your sleep.
#include <bits/stdc++.h>
#define int long long

using namespace std;
const int inf = 1e9;

signed solve(){
    int n;
    cin>>n;
    vector<vector<pair<int, pair<int,int>>>> g(n+1);
    int s,f;
    cin>>s>>f;
    int m;
    cin>>m;
    int v,to,out_t,from_t;
    for(int i = 0;i<m;i++){

        cin>>v>>out_t>>to>>from_t;
        g[v].push_back({to,{out_t,from_t}});
    }
    vector<int> dist(n+1,inf);
    vector<int> time(n+1,inf);
    set<pair<int,int>> q;
    dist[s] = 0;
    time[s] = 0;
    q.insert({0,s});
    while(!q.empty()){
        v = q.begin()->second;
        q.erase(q.begin());
        for(auto it: g[v]){
            to = it.first;
            from_t = it.second.first;
            out_t = it.second.second;
            int w = (out_t - time[v]);
            if((time[v] <= from_t) and (dist[to]>dist[v]+w)){
                q.erase({dist[to], to});
                time[to] = out_t;

                q.insert({dist[to] = dist[v]+w, to});
            }
        }
    }
    if(dist[f] == inf) cout<<-1<<endl;
    else cout<<dist[f]<<endl;
    return 0;
}
signed main ()
{
    int test = 1;
    //cin>>test;
    while(test--) solve();

    return 0;
}
