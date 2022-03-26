#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;
int get(int v, vector <int> &pt){
    if(v==pt[v]) {
        return v;
    }
    else{
        return (pt[v] = get(pt[v],pt));
    }
}
void unite(int a,int b,vector <int> &pt, vector <int> &ras){
    a = get(a,pt);
    b = get(b,pt);
    if(ras[a] < ras[b]) {
        swap(a, b);
    }
    if(a!=b) {
        pt[a] = b;
    }
    if(ras[a] == ras[b]) {
        ras[a]++;
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,k,p;
    cin>>n>>k;
    vector<int> pt(n+1);
    for(int i = 1;i<n+1;i++){
        pt[i]=i;
    }
    vector<pair<int,int>> g(k);
    int a,b,q;
    for(int i = 0;i<k;i++){
        cin>>a>>b;
        g[i]={a,b};
    }
    cin>>q;
    int c = n;
    vector <int> zap(q);
    vector <bool> us(k,0);
    vector <int> ras(n+1,0);
    vector <int> ans (q);
    for(int i = 1;i<q+1;i++){
        cin>>p;
        us[p-1] = 1;
        zap[i-1] = p-1;
    }
    for(int i = 0;i<g.size();i++){
        if(!us[i]){
            a = g[i].first;
            b = g[i].second;
            if(get(g[i].first,pt) != get(g[i].second, pt)){
                c--;
                unite(g[i].first,g[i].second,pt,ras);
            }
        }
    }
    for(int i = zap.size()-1;i>-1;i--){
        ans[i] = c;
        a = g[zap[i]].first;
        b = g[zap[i]].second;
        if(get(g[zap[i]].first,pt) != get(g[zap[i]].second,pt)){
            c--;
            unite(g[zap[i]].first,g[zap[i]].second,pt,ras);
        }
    }
    for(int i = 0;i<ans.size();i++) cout<<ans[i]<<' ';
    return 0;
}
