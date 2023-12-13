#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a[3], b[3];

    for (int i = 0; i < 3; i++)
        cin >> a[i];

    for (int i = 0; i < 3; i++)
        cin >> b[i];

    int hd = 0;
    int hp = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            hd++;
        else if (a[i] < b[i])
            hp++;
    }

    cout << hd << ' ' << hp;
}
