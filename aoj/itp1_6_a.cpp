#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);
	
	for (int i = 0; i < n / 2; i++) {
		int t = a.at(i);
		a.at(i) = a.at(n - i - 1);
		a.at(n - i - 1) = t;
	}

	for (int i = 0; i < n; i++) {
		cout << a.at(i);
		if (i != n - 1) cout << " ";
	}
	cout << endl;
}

