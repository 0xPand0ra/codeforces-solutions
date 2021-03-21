/*
 * author = https://github.com/HueOne
 * time = 15 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, t1, a, mi;
	scanf("%d", &t);
	vector<int> v;
	for(int i=0;i<t;++i){
		v.clear();
		scanf("%d", &t1);
		for(int j=0;j<t1;++j)
			scanf("%d", &a), v.push_back(a);
		sort(v.begin(), v.end());
		for(int j=1;j<v.size();++j)
			j == 1 ? mi = v[j] - v[j-1] : mi = mi = min(v[j]-v[j-1], mi);	
		printf("%d\n", mi);
	}
	return 0;
}
