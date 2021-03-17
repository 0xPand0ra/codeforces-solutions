/*
 * author: https://github.com/HueOne
 * time = 31 ms
 * GNU c++ 17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, a, ma = 0;
	vector<int> v;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%d", &a);
		ma = max(ma, a);
		v.push_back(a);
	}
	a=0;
	for(int i=0;i<n;++i)
		a+=ma - v[i];
	printf("%d", a);
	return 0;
}
