// time = 31 ms 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, e,s=0, c=0;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%d",&e);
		s+=e;
		if(s<0) ++c, s=0;
	}
	printf("%d", c);
	return 0;
}
