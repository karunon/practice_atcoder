#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, x, right = 0, left = 0;
	cin >> n >> m >> x;

	vector<int> a(n);
	for (int i = 0; i < m; i++) {
		int t;
		cin >> t;
		a.at(t) = 1;
	}

	for (int i = 0; i < x; i++) if (a.at(i)) left++;
	for (int i = x; i < n; i++) if (a.at(i)) right++;
	
	if (left >= right) cout << right << endl;
	else cout << left << endl;
}

