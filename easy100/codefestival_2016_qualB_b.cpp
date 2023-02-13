#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, b_rank = 0, total = 0;
	string s;
	cin >> n >> a >> b >> s;
	
	for (int i = 0; i < n; i++) {
		if (total >= a + b) {
			cout << "No" << endl;
			continue;
		}
		if (s.at(i) == 'a') {
			cout << "Yes" << endl;
			total++;
		}
		else if (s.at(i) == 'b' && ++b_rank <= b) {
			cout << "Yes" << endl;
			total++;
		}
		else cout << "No" << endl;
	}
}

