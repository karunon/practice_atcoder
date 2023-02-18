#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool continue_count = false;
	int i = 0, count = 0, max = 0;
	string s;
	cin >> s;

	while (i < s.size()) {
		char t = s.at(i);
		if (t == 'A' || t == 'C' || t == 'G' || t == 'T') {
			if (!continue_count) continue_count = true;
			count++;
			if (max < count) max = count;
		}
		else {
			continue_count = false;
			count = 0;
		}
		i++;
	}

	cout << max << endl;
}

