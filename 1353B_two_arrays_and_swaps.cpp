/*
 * author: https://github.com/HueOne
 * time = 15 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, k, a, b, r;
	scanf("%d", &t);
	vector<int> va, vb;
	for(int i=0;i<t;++i){
		r=0;
		va.clear(), vb.clear();
		scanf("%d %d", &n, &k);
		for(int l=0;l<2;++l){
			for(int j=0;j<n;++j){
					scanf("%d", &a);
					l==0 ? va.push_back(a) : vb.push_back(a);
			}
		}
		sort(va.begin(), va.end());
		sort(vb.begin(), vb.end());
		
		for(int j=0, l=vb.size()-1;j<k;++j,--l){
			if(va[j] < vb[l]) swap(va[j], vb[l]);
			else break;
		}
		for(int j=0;j<va.size();++j)
			r+=va[j];
		printf("%d\n", r);
	}
	
	return 0;
}
