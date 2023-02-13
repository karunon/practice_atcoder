#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> x(2);

	while (cin >> x.at(0) >> x.at(1)) {
		if (x.at(0) == 0 && x.at(1) == 0) break;

		sort(x.begin(), x.end());
		cout << x.at(0) << " " << x.at(1) << endl;
	}
}

