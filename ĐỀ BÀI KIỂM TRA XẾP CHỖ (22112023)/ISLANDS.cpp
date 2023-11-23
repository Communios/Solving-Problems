#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 1e5 + 5;

struct Land {
	int x, h;
};

bool cmp(Land a, Land b) {
	return a.h < b.h;
}

Land lands[N];
bool under[N] = {0};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> lands[i].h;
		lands[i].x = i;
	}

	sort(lands, lands + n, cmp);

	int numislands = 1;
	int maxislands = 1;

	for (int i = 0; i < n; i++) {
		int x = lands[i].x;

		under[x] = 1;

		bool toleft = (x > 0 && !under[x - 1]);
		bool toright = (x < n - 1 && !under[x + 1]);

		if (toleft && toright) {
			numislands++;
		}
		else if (!toleft && !toright) {
			numislands--;
		}

		if ((i == n - 1 || lands[i + 1].h > lands[i].h) && (numislands > maxislands)) {
			maxislands = numislands;
		}
	}

	cout << maxislands;
}
