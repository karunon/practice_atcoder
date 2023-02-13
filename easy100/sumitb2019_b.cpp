#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n;
	cin >> n;

	int x = (int)((n + 1.0) / 1.08);

	if (n <= x * 1.08 && x * 1.08 < n + 1) cout << x << endl;
	else cout << ":(" << endl;
}

