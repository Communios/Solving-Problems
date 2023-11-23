/* Insignia of a man is his will to commit his life the Motherland's oath. */
                                                /* -- Randomly generated. */

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int a[n];
    set<int> u;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        u.insert(a[i]);
    }

    int glob_max = 0;

    for (int un : u) {
        int now = a[0];
        int len = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == un) {
                continue;
            }
            else if (now == a[i]) {
                len++;
            }
            else {
                len = 1;
            }
            now = a[i];
            glob_max = max(len, glob_max);
        }
    }

    if (glob_max == 0)
        cout << n;
    else
        cout << glob_max;
}
