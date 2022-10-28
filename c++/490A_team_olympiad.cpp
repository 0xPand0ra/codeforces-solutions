/*
 * author: https://github.com/HueOne
 * time = 31 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, a, mi;
	vector<int> v, v1, v2, v3;
	scanf("%d", &n);
	for(int i=0;i<n;++i)
		scanf("%d", &a), v.push_back(a);
	for(int i=0;i<n;++i){
		 if(v[i] == 1) v1.push_back(i+1);
		 else if(v[i] == 2)v2.push_back(i+1);
		 else v3.push_back(i+1);
	}
	mi = min(v1.size(),min(v2.size(), v3.size()));
	printf("%d\n", mi);
	for(int i=0;i<mi;++i)
		printf("%d %d %d\n", v1[i], v2[i], v3[i]);
	return 0;
}
