#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, max_time = 0, ans = 1;
	cin >> n;

	for (int i = n; i > 1; i--) {
		int x = i;
		int time = 0;
		while (x) {
			if (x % 2) break;
			else {
				time++;
				x /= 2;
			}
		}
		if (time >= max_time) {
			ans = i;
			max_time = time;
		}
	}
	cout << ans << endl;
}

