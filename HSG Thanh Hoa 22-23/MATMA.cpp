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

    freopen("MATMA.inp", "r", stdin);
    freopen("MATMA.out", "w", stdout);

    string s;
    cin >> s;

    int sum = 0;
    bool div10 = 0;

    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        if (d == 0)
            div10 = 1;
        sum += d;
    }

    if (!div10 || sum % 3 != 0) {
        cout << -1;
        return 0;
    }

    sort(s.begin(), s.end(), greater<char>());

    cout << s;
}
