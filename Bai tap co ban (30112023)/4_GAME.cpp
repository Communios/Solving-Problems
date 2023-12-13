#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a, b;
    cin >> a >> b;
    ll ans = round(a / 2.0) * round(b / 2.0);
    cout << ans;
}
