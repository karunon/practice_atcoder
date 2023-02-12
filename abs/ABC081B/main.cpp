#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	
	int x[n];

	for (int i = 0; i < n; i++) {
		cin >> x[i];
		x[i] *= 2;
	}

	while (1) {
		int c = 0;
		for (int i = 0; i < n; i++) {
			x[i] /= 2;
			if (x[i] % 2) c++;
		}

		if (c) break;
		
		count++;
	}

	cout << count << endl;
}

