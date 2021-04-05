/*
 * author: https://github.com/HueOne
 * time: 31 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, a, b;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
		scanf("%d %d", &a, &b);
		a%2==0 ? printf("%d\n",a/2*b) : printf("%d\n", a/2*b + b/2 + b%2);
	}

	return 0;
}
