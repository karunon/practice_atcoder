#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, check = 0;
	cin >> n;

	int t[n + 1], x[n + 1], y[n + 1];
	t[0] = 0;
	x[0] = 0;
	y[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> t[i] >> x[i] >> y[i];
	}

	for (int i = 1; i <= n; i++) {
		int tt = abs(x[i] - x[i - 1] + y[i] - y[i - 1]);
		int def_t = t[i] - t[i - 1];

		if (tt <= def_t) {
			if (tt % 2 && def_t % 2) continue;
			if (tt % 2 == 0 && def_t % 2 == 0) continue;
		}
		check = 1;
		break;
	}
	if (check) cout << "No" << endl;
	else cout << "Yes" << endl;
}

