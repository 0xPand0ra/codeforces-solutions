// time = 31 ms
#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,nk,r,s=1;
	scanf("%d %d", &k, &r);
	k = k%10;
	nk=k;
	while(k%10!=r and k%10!=0)
		++s, k+=nk;
	printf("%d", s);
	
	return 0;
}
