/*
	https://github.com/HueOne/codeforces-solutions
	time: 30 ms
	memory: 0 KB
*/
#include <bits/stdc++.h>
using namespace std;

void solution() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '.') {
			cout << 0;
		}
		else {
			if (s[i + 1] == '-') cout << 2;
			else cout << 1;
			++i;
		}

	}
}

int main() {
	solution();

	return 0;
}
