#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, min = 1000000, max = -1000000;
	long long sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		
		sum += (long long)a;
		if (min > a) min = a;
		if (max < a) max = a;
	}

	cout << min << " " << max << " " << sum << endl;
}

