/*
 * TIME = 30ms
 * AUTHOR: https://github.com/HueOne
 */

#include <bits/stdc++.h>
using namespace std;

int  a, b, c, coins;

bool f(){
	int maks = max(a, b);
	maks = max(maks, c);
	if((maks - a + maks - b + maks - c) > coins or (coins - (maks - a + maks - b + maks - c))%3 != 0)
		return false;
	return true;
}

int main(){

	int t;
	scanf("%d", &t);

	for(int i=0;i<t;++i){
		scanf("%d %d %d %d", &a, &b, &c, &coins);
		f() ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}