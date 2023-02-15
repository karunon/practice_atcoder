#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int t = b;
	int b_digits = 0;
	while (t) {
		t /= 10;
		b_digits++;
	}

	int num = a * pow(10, b_digits) + b;

	double sqr = sqrt(num);
	int sqr_int = (int)sqr;

	if (sqr - (double)sqr_int) cout << "No" << endl;
	else cout << "Yes" << endl;
}

