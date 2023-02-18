#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n, x, ans = 0;
	cin >> n >> x;
 
	vector<long long> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);
 
	sort(a.begin(), a.end());
	
	for (int i = 0; i < n; i++) {
		if (x >= a.at(i) && i < n - 1) {
			x -= a.at(i);
			ans++;
		}
		else if (x == a.at(i) && i == n - 1) {
			ans++;
			break;
		}
		else {
			break;
		}
	}
	cout << ans << endl;
}

