#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0, check = 1;
	const vector<string> f = { "dream", "dreamer", "erase", "eraser" };
	string s;
	cin >> s;

	n = s.size();
	while (n >= 5 && check == 1) {
		check = 0;
		for (int i = 0; i < 4; i++) {
			
			int fn = f.at(i).size();
			if (n < fn) continue;

			if (s.substr(n - fn, fn) == f.at(i)) {
				check = 1;
				n -= fn;
				break;
			}
		}
	}
	if (check) cout << "YES" << endl;
	else cout << "NO" << endl;
}

