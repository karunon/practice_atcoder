#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, n;
	cin >> k >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++) cin >> a.at(i);

	sort(a.begin(), a.end());

	int ans = a.at(n - 1) - a.at(0);

	for (int i = 1; i < n; i++) {
		int ai_start = k - a.at(i);
		int start_ai_1 = a.at(i - 1);
		ans = min(ans, ai_start + start_ai_1);
	}
	cout << ans << endl;
}

