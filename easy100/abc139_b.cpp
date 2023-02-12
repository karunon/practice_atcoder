#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, sum = 1, ans = 0;
	cin >> a >> b;

	while (sum < b) { 
		ans++;
		sum += a - 1;
	}
	cout << ans << endl;
}

