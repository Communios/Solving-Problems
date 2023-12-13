#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            cout << ' ';
        for (int j = 0; j < n - i; j++)
            cout << '#';

        cout << '\n';
    }
}
