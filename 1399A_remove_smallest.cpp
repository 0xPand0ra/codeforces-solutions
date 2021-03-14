#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	scanf("%d", &a);
	set<int> v;
	vector<int> v1;;
	for(int i=0;i<a;++i){
		scanf("%d", &b);
		v.clear(), v1.clear();
		for(int j=0;j<b;++j)
			scanf("%d",&c), v.insert(c);
			
		bool y=true;
		for(auto z : v)
			v1.push_back(z);

		for(int j=1;j<v1.size();++j)
			if(abs(v1[j]-v1[j-1]) > 1) {y = false; break;}
			
		y == true ? printf("YES\n") : printf("NO\n");
	}	
	return 0;

}
