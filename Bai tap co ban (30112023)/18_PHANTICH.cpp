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

    vector<int> f;

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            f.push_back(i);
        }
    }

    if (n > 1)
        f.push_back(n);

    for (int i = 0; i < f.size(); i++) {
        if (i == f.size() - 1) {
            cout << f[i];
        }
        else
            cout << f[i] << '*';
    }
}
