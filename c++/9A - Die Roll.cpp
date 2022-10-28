/*
	https://github.com/HueOne/codeforces-solutions
	time: 30 ms
	memory: 0 KB
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> div(int a) {
	int i = 2;
	vector<int> v;
	while (a > 1) {
		if (a % i == 0) {
			v.push_back(i);
			a /= i;
		}
		else ++i;
	}
	cout << endl;
	return v;
}


void solution() {
	int Y, W, omega=6, d;
	cin >> Y >> W;
	int chance = 6 - max(Y, W) +1;
	vector<int> v;
	v = div(chance);
	int o = 1;
	int too=0, tooo = 0;
	for (auto a : v) {
		if (a == 2 and too < 1) {
			o *= 2;
			++too;
		}
		else if (a == 3 and tooo < 1) {
			o *= 3;
			++tooo;
		}
	}
	chance /= o;
	omega /= o;
		
	cout << chance << "/" << omega << endl;	

}

int main() {
	solution();

	return 0;
}
