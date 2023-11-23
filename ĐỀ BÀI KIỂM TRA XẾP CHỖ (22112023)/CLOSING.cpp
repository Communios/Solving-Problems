/* Insignia of a man is his will to commit his life the Motherland's oath. */
                                                /* -- Randomly generated. */
/* 2 TEXT FILES ARE IDENTICAL!!!!!!!!!!!!!!!!!!!!!!!!!!!! */
/* TEST01 correct */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
using ll = long long;

const int N = 3 * 1e3 + 10;
bool blocked[N] = {0};
bool vis[N] = {0};
vector<int> graph[N];

int dfs(int u) {
    vis[u] = 1;
    int k = 1;

    for (int v : graph[u]) {
        if (vis[v] == 0 && blocked[v] == 0)
            k += dfs(v);
    }

    return k;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int node = n;
    if (node == dfs(1))
        cout << "YES" << '\n';

    for (int w = 1; w <= n; w++) {
        int bn;
        cin >> bn;

        if (w == n) {
            break;
        }

        blocked[bn] = 1;
        node--;
        memset(vis, 0, sizeof(vis));

        int cnt;

        for (int i = 1; i <= n; i++) {
            if (blocked[i] == 0) {
                cnt = dfs(i);
                break;
            }
        }

        if (cnt == node)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}
