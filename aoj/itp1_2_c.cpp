#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> x(3);
	for (int i = 0; i < 3; i++) {
		cin >> x.at(i);
	}
	sort(x.begin(), x.end());

	cout << x.at(0) << " " << x.at(1) << " " << x.at(2) << endl;
}

