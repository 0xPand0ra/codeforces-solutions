/*
	https://github.com/HueOne/codeforces-solutions
	time: 15 ms
	memory: 0 KB
*/

#include <bits/stdc++.h>

using namespace std;

void results(vector<int> v, int M) {
	vector<int> res;
	int a = 1;

	for (int i = 0; i < M; ++i){ 		
		if (a % 3 == 0 or a % 10 == 3) {
			--i;
		}
		else {
			res.push_back(a);
		}
		++a;
	}

	for (auto a : v) {
		cout << res[a-1] << endl;
	}
}

int main() {
	int t, k, M=0;
	cin >> t;
	vector<int>v;
	for (int i = 0; i < t; ++i) {
		cin >> k;
		M = max(M, k);
		v.push_back(k);
	}

	results(v, M);

	return 0;
}
