#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector<int> d;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		d.push_back(a);
	}

	sort(d.begin(), d.end());
	d.erase(unique(d.begin(), d.end()), d.end());

	cout << d.size() << endl;
}

