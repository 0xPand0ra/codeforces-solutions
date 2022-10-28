/*
 * TIME = 15ms
 * AUTHOR: https://github.com/HueOne
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	scanf("%d", &t);

	for(int i=0;i<t;++i){
		scanf("%d", &n);
		n%4 == 0 ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}