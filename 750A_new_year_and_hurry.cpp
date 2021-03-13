#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,s=0,p=0;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;++i)
		s+(i+1)*5 > 240-k ? i=n : ++p, s+=(i+1)*5;
	
	printf("%d", p);
	return 0;
}
