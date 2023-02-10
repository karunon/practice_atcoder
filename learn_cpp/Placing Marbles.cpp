#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> c;

	a = c / 100;
	b = c / 10 % 10;
	c %= 10;

	cout << a + b + c << endl;
}

