#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int i = 0;

	while (i < 10000) {
		cin >> x;
		if (x == 0) {
			break;
		}
		cout << "Case " << i + 1 << ": " << x << endl;
		i++;
	}

}

