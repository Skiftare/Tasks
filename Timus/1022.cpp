#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;
int n, c;
vector<bool> used(MAXN);
vector<int> g[MAXN], ans;
void dfs(int v) {
    used[v] = true;
    for (size_t i = 0; i < g[v].size(); ++i) {
        if (!used[g[v][i]])
            dfs(g[v][i]);
    }
    ans.push_back(v);
}

void topological_sort() {
    for (int i = 0; i < n; i++)
        if (!used[i])
            dfs(i);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        used[i] = 0;
        while (cin >> c && c != 0)
            g[i].push_back(c - 1);
    }

    topological_sort();

    for (int i = n - 1; i >= 0; i--)
        cout << ans[i] + 1 << " ";
    return 0;
}
