#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, i = 0;
	cin >> a >> b;

	cout << "a";
	while (i < a) {
		cout << "]";
		i++;
	}

	i = 0;
	cout << endl << "b";
	while (i < b) {
		cout << "]";
		i++;
	}
	cout << endl;
}

