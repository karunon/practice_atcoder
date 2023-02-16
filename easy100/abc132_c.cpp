#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;

	vector<int> d(n);
	for (int i = 0; i < n; i++) cin >> d.at(i);
	sort(d.begin(), d.end());

	int half_before = d.at(n / 2 - 1);
	int half_after = d.at(n / 2);

	if (half_after == half_before) {
		cout << "0" << endl;
		return 0;
	}

	for (int i = half_after; i > half_before; i--) ans++;

	cout << ans << endl;
}

