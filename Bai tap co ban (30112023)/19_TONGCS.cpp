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

    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << sum;
}
