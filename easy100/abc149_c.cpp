#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	double sqrt_n = sqrt(n);

	for (int i = 3; i <= sqrt_n; i += 2) {
		if (n % i == 0) return false;
	}

	return true;
}

int main()
{
	bool check = false;
	int x;
	cin >> x;

	while (1) {
		check = check_prime(x);
		if (check) break;
		x++;
	}

	cout << x << endl;
}

