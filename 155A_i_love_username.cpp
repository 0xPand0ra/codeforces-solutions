#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, c, a=0, mi, ma;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%d", &c);
		if((i!=0) && (ma < c or mi > c)){ 
			++a;
			ma = max(ma,c), mi=min(mi,c);
		}
		else if(i==0) mi=c,ma=c;
	}
	printf("%d", a);
	return 0;
}

