/*
	https://github.com/HueOne/codeforces-solutions
	time: 717 ms
	memory: 200 KB
*/

#include <bits/stdc++.h>
using namespace std;

void alg(vector<int> v) {
	int M = 0, m = pow(10, 9);
	for (auto a : v) {
		M = max(M, a);
		m = min(m, a);
	}
	cout << M - m<<endl;
}

void solution() {
	int k, k1, a;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		cin >> k1;
		vector<int> v;
		for (int j = 0; j < k1; ++j) {
			cin >> a;
			v.push_back(a);
		}

		alg(v);

	}
}

int main() {
	solution();

	return 0;
}
