#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int mini = INT32_MAX;
    int maxi = INT32_MIN;

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;

        mini = min(e, mini);
        maxi = max(e, maxi);

        a[i] = mini;
        b[i] = maxi;
    }

    int l = 0, h = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1])
            l++;
        if (b[i] != b[i + 1])
            h++;
    }

    cout << h << ' ' << l;
}
