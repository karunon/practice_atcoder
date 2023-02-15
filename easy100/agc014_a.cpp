#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ans = 0;
	long long a, b, c;
	cin >> a >> b >> c;

	while (!(a % 2 || b % 2 || c % 2)) {
		if (a == b && b == c) {
			cout << "-1" << endl;
			return 0;
		}
		int div_a = a / 2;
		int div_b = b / 2;
		int div_c = c  / 2;

		a += div_c + div_b;
		b += div_a + div_c;
		c += div_b + div_a;

		ans++;
	}

	cout << ans << endl;
}

