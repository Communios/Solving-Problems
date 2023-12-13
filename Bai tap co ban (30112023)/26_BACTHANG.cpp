#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n ;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;

        if (e < 10)
            continue;

        int prev = INT32_MAX;
        bool br = 0;
        while (e > 0) {
            int d = e % 10;
            e /= 10;

            if (d >= prev) {
                br = 1;
                break;
            }

            prev = d;
        }

        if (br)
            continue;

        cnt++;
    }

    cout << cnt;
}
