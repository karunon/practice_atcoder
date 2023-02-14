#include <bits/stdc++.h>
using namespace std;

int main()
{
	string ans = "No";
	int a[3][3] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}

	int n;
	cin >> n;
	int b[n] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int c: b) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (c == a[i][j]) a[i][j] = 0;
			}
		}
	}

	if (!a[0][0] && !a[1][1] && !a[2][2]) ans = "Yes";
	if (!a[0][2] && !a[1][1] && !a[2][0]) ans = "Yes";

	for (int i = 0; i < 3; i++) {
		if (!a[0][i] && !a[1][i] && !a[2][i]) ans = "Yes";
		if (!a[i][0] && !a[i][1] && !a[i][2]) ans = "Yes";
	}

	cout << ans << endl;
}

