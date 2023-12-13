#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, k, p;
    cin >> n >> k >> p;
    ll ex = n % (k + 1);
    ll gr = n / (k + 1);
    ll total = ex * p + gr * k * p;

    cout << total;
}
