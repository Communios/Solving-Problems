/* Attempted to solve using Segment Tree */
/* 67.0 / 100.0 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 3 * 1e6 + 10;
const int INF = 1e9;
int a[N];
int st_min[4 * N], st_max[4 * N];

void build_max(int id, int l, int r) {
    if (l == r) {
        st_max[id] = a[l];
        return;
    }

    int mid = (l + r) >> 1;
    build_max(2 * id, l, mid);
    build_max(2 * id + 1, mid + 1, r);

    st_max[id] = max(st_max[2 * id], st_max[2 * id + 1]);
}

int get_max(int id, int l, int r, int u, int v) {
    if (l > v || r < u) return -INF;

    if (l >= u && r <= v)
        return st_max[id];

    int mid = (l + r) >> 1;
    int get1 = get_max(2 * id, l, mid, u, v);
    int get2 = get_max(2 * id + 1, mid + 1, r, u, v);

    return max(get1, get2);
}

void build_min(int id, int l, int r) {
    if (l == r) {
        st_min[id] = a[l];
        return;
    }

    int mid = (l + r) >> 1;
    build_min(2 * id, l, mid);
    build_min(2 * id + 1, mid + 1, r);

    st_min[id] = min(st_min[2 * id], st_min[2 * id + 1]);
}

int get_min(int id, int l, int r, int u, int v) {
    if (l > v || r < u) return INF;

    if (l >= u && r <= v)
        return st_min[id];

    int mid = (l + r) >> 1;
    int get1 = get_min(2 * id, l, mid, u, v);
    int get2 = get_min(2 * id + 1, mid + 1, r, u, v);

    return min(get1, get2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build_max(1, 1, n);
    build_min(1, 1, n);

    int ans = 1;

    for (int i = 1; i <= n; i++) {
        int l = 1, r = i, pos = -1;

        while (l <= r) {
            int mid = (l + r) >> 1;
            int rmax = get_max(1, 1, n, mid, i);
            int rmin = get_min(1, 1, n, mid, i);

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
