#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}
	
	sort(a.begin(), a.end(), greater<int>());

	for (int i = 0; i < n; i++) {
		if (i % 2) sum -= a.at(i);
		else sum += a.at(i);
	}

	cout << sum << endl;
}

