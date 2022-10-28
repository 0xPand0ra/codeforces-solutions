//time = 31 ms 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b, n;
	scanf("%d", &t);
	for(int i=0;i<t;++i){
		scanf("%d %d", &a, &b);
		n = abs(a-b);
		n%10==0 ? printf("%d\n",n/10) : printf("%d\n", n/10+1);
	}
	return 0;
}
