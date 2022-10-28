/*
 * TIME = 30ms
 * AUTHOR: https://github.com/HueOne
 */
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

bool f(){
	int d=1, e=1;
	while(a%2 == 0){
		a/=2;
		d*=2;
	}
	while(b%2==0){
		b/=2;
		e*=2;
	}
	if(e*d >= c) return true;
	return false;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; ++i){
		scanf("%d %d %d", &a, &b, &c);
		f() == true ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}