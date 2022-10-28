// author: https://github.com/HueOne
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, m = 0;
	vector<int> v;
	for(int i=0;i<4;++i)
		cin >> a, v.push_back(a);
	string s;
	cin >> s;

	for(int i=0;i<s.length();++i)
		m+=v[(int)(char)s[i]-49];
	cout << m <<endl;

	return 0;
}