/*
 * author: https://github.com/HueOne
 * time = 15 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, a;
	vector<int> v;
	cin >> n;
	for(int j=0;j<n;++j){
		v.clear();
		cin >> a;
		cout << (a+a%2)/2<<endl;
	}
	return 0;
}
