/*
 * TIME = 62 ms
 * AUTHOR: https://github.com/HueOne
 */

#include <bits/stdc++.h>
using namespace std;

int n, k, l, c, d, p, nl, np;

int f(){
	int t;
	t = (int)k*l/(nl*n);
	t = min(t, (int)d*c/n);
	t = min(t, (int)p/(n*np));
	return t;
}

int main(){
	
	scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
	printf("%d\n", f());

	return 0;
}