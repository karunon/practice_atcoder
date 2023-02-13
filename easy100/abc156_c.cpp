#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, min = 100, max = 1, total = 250000;
	cin >> n;

	vector<int> x(n);
	for (int i = 0; i < n; i++) {
		cin >> x.at(i);
		if (min > x.at(i)) min = x.at(i);
		if (max < x.at(i)) max = x.at(i);
	}

	for (int i = min; i <= max; i++) {
		int t = 0;
		for (int j: x) {
			t += (j - i) * (j - i);
		}
		if (t <= total) total = t;
	}
	cout << total << endl;
}

