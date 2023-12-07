#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>
#include <cstdint>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("CANDIES.inp", "r", stdin);
    freopen("CANDIES.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> p;

    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;

        if (e > 0 && e % 3 == 0)
            p.push_back(e);
    }

    cout << p.size() << '\n';

    int s = 0;
    for (int i : p) {
        s += (i - 3) / 3;
    }

    cout << s;
}
