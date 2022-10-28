/*
 * author: github.com/HueOne
 * time = 31 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	scanf("%d", &n);	
	vector<int> v;
	map<int, bool> m;
	for(int i=0;i<n;++i){
		scanf("%d", &a);
		v.clear(), m.clear();
		for(int j=0;j<a*2;++j){
			scanf("%d", &b);
			if(m[b]!=true) v.push_back(b), m[b]=true; 
		}
		for(int j=0;j<v.size();++j)
			printf("%d ", v[j]);
		printf("\n");

	}
	return 0;
}