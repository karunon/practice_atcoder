#include <bits/stdc++.h>
using namespace std;

int main() {
	int w, h, x, y, r;
	cin >> w >> h >> x >> y >> r;

	if (x - r >= 0 && x + r <= w) {
		if (y - r >= 0 && y + r <= h) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}

