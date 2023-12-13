#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

vector<bool> sieve(300001, 1);

void gen() {
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i * i <= 300000; i++)
        if (sieve[i])
            for (int j = i * i; j <= 300000; j += i)
                sieve[j] = 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    gen();

    int n;
    cin >> n;
    int c = 0;
    for (int i = 2; i * 2 < n; i++) {
        if (sieve[i] && sieve[n - i])
            c++;
    }
    cout << c << '\n';
    for (int i = 2; i * 2 < n; i++) {
        if (sieve[i] && sieve[n - i])
            cout << i << ' ' << n - i << '\n';
    }
}
