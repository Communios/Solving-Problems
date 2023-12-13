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

    while (n--) {
        int s;
        cin >> s;

        if (s < 38) {
            cout << s;
        }
        else {
            int diff = (s % 5 != 0 ? 5 - (s % 5) : 0);

            if (diff < 3) {
                s += diff;
            }

            cout << s;
        }

        cout << '\n';
    }
}
