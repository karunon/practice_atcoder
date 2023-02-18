#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s;
	cin >> s;

	vector<int> a(1000000);
	a.at(0) = s;
	for (int i = 1; i <= 1000000; i++) {
		if (a.at(i - 1) % 2) a.at(i) = 3 * a.at(i - 1) + 1;
		else a.at(i) = a.at(i - 1) / 2;

		for (int j = 0; j < i; j++) {
			if (a.at(j) == a.at(i)) {
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
}

