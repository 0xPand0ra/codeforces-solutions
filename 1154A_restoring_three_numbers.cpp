//time = 15 ms
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,m;
	vector<int> v;
	for(int i=0;i<4;++i){
		scanf("%d", &a);
		v.push_back(a); 
		i == 0 ? m = a : m = max(m,a);
	}

	for(int i=0;i<4;++i)
		if(v[i]!=m) printf("%d ", m-v[i]);

	return 0;
}
