#include <bits/stdc++.h>
#define int long long
const int inf = 1e9+7;
using namespace std;
pair <int,int> rotate(int x,int y) {
    return make_pair(y,3-x);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int x,y;
    pair<int,int> buf;
    int net[4][4];
    char set[4][4];
    int final_mask[4][4];
    char c;
    queue<pair<int,int>> q;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            net[i][j] = 0;
            final_mask[i][j] = 0;
            cin>>c;
            if(c == 'X'){
                q.push(make_pair(i,j));
            }
        }
    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++) {
            cin>>c;
            set[i][j] = c;
        }
    }
    string ans;
    vector <pair<int,int>> buffer;
    while(ans.length()<16){
        buffer.clear();
        for(int i = 0;i<4;i++) {
            buf = q.front();
            q.pop();
            ans = ans + set[buf.first][buf.second];
            buffer.push_back(rotate(buf.first,buf.second));
        }
        std::sort(buffer.begin(), buffer.end());
        for(int i = 0;i<buffer.size();i++) q.push(buffer[i]);
    }

    cout<<ans<<endl;

    return 0;
}
