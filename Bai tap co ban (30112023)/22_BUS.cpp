#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, d, t;
    cin >> n >> d >> t;

    while (n--) {
        int x;
        cin >> x;

        int ans = 1;
        if (x > t) {
            x -= t;
            if (x % d == 0) x /= d;
            else {
                x /= d;
                x++;
            }
          ans += x;
        }
      cout << ans << ' ';
    }
}
