/*
 * author: https://github.com/HueOne
 * time = 30 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, l, a, e, ne, pos;
	vector<int> v;
	scanf("%d", &t);
	for(int i=0;i<t;++i){
		v.clear(), e=0, ne=0, pos=0;
		scanf("%d", &l);
		for(int j=0;j<l;++j)
			scanf("%d", &a), v.push_back(a), a%2 == 0 ? ++e : ++ne;	
		if(v.size()%2 == 0 and e!=ne)
			printf("-1\n");
		else if(v.size()%2==1 and ne + 1 != e)
			printf("-1\n");
		else{
			for(int j=0;j<v.size();++j)
				if(j%2 != v[j]%2) ++pos;	
			printf("%d\n", pos/2);
		}
	}
	return 0;
}
// 1 2 3 4 5 
// 1 3 4 5 6
