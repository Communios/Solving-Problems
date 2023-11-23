/* Sparse Table initially succeeded. */
/* 67.0 / 100.0 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 3 * 1e5 + 10;
const int INF = 1e9;
const int K = 25;
int a[N];
int st_max[K + 1][N];
int st_min[K + 1][N];

void pre_max(int n) {
    for (int i = 1; i <= K; i++)
        for (int j = 1; j + (1 << i) - 1 <= n; j++)
            st_max[i][j] = max(st_max[i - 1][j], st_max[i - 1][j + (1 << (i - 1))]);
}

int query_max(int l, int r) {
    if (l == r)
        return st_max[0][l];
    int k = __lg(r - l + 1);
    return max(st_max[k][l], st_max[k][r - (1 << k) + 1]);
}

void pre_min(int n) {
    for (int i = 1; i <= K; i++)
        for (int j = 1; j + (1 << i) - 1 <= n; j++)
            st_min[i][j] = min(st_min[i - 1][j], st_min[i - 1][j + (1 << (i - 1))]);
}

int query_min(int l, int r) {
    if (l == r)
        return st_min[0][l];
    int k = __lg(r - l + 1);
    return min(st_min[k][l], st_min[k][r - (1 << k) + 1]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;

    for (int i = 1; i <= n; i++) {
        cin >> st_max[0][i];
        st_min[0][i] = st_max[0][i];
    }

    pre_max(n);
    pre_min(n);

    int ans = 1;

    for (int i = 1; i <= n; i++) {
        int l = 1, r = i, pos = -1;

        while (l <= r) {
            int mid = (l + r) >> 1;
            int rmax = query_max(mid, i);
            int rmin = query_min(mid, i);

            if (rmax - rmin <= t) {
                pos = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        ans = max(ans, i - pos + 1);
    }

    cout << ans;
}
