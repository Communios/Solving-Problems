#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll r, c;
    cin >> r >> c;

    ll ini = 0;

    if (r & 1)
        ini = (c - 1) * 2;
    else
        ini = (c - 1) * 2 + 1;

    ini += ((r / 2) + (r % 2 != 0) - 1) * 10;

    cout << ini;
}
