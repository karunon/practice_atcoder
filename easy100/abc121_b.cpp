#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, c, count = 0;
	cin >> n >> m >> c;

	int b[m];
	for (int i = 0; i < m; i++) cin >> b[i];
	
	for (int i = 0; i < n; i++) {
		int total = 0;
		for (int j = 0; j < m; j++) {
			int a;
			cin >> a;
			total += a * b[j];
		}
		total += c;
		if (total > 0) count++;
	}

	cout << count << endl;
}

