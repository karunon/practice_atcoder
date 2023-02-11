#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	string s;
	char before;
	cin >> s;

	before = s[0];
	for (int i = 0; i < 4; i++) {
		if (before == s[i]) {
			n++;
		} else {
			n = 0;
		}

		if (n == 3) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}

