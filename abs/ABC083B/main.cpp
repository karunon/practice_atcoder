#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, sum = 0;
	cin >> n >> a >> b;

	for (int i = 1; i <= n; i++) {
		
		int s = 0, num = i;
		while (num) {
			int d = num % 10;
			s += d;
			num /= 10;
		}

		if (a <= s && b >= s) sum += i;
	}

	cout << sum << endl;
}

