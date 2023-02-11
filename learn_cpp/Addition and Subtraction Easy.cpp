#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, result;
	char op;
	cin >> a >> op >> b;

	if (op == '+') result = a + b;
	else result = a - b;

	cout << result << endl;
}

