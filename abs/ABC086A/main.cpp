#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	string ans;
	
	cin >> a >> b;

	ans = (a * b) % 2 ? "Odd" : "Even";
	cout << ans << endl;
}

