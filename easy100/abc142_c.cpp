#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	map<int, int> a{};
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		a.emplace(t, i);
	}

	for (auto const& [k, v] : a) {
		cout << v << " ";
	}
	cout << endl;
}

