/*
 * author: https://github.com/HueOne
 * time = 31 ms 
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b, m=0 , c=0;
	scanf("%d", &t);
	for(int i=0;i<t;++i){
		scanf("%d %d", &a, &b);
		if(a!=b) a > b ? ++m : ++c;
	}
	if(c == m) printf("Friendship is magic!^^");
	else m > c ? printf("Mishka") : printf("Chris");
	return 0;
}
