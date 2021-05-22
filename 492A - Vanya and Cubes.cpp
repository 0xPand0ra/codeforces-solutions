/*
 * TIME = 30ms
 * AUTHOR: https://github.com/HueOne
 */
#include <bits/stdc++.h>
using namespace std;

int t;

int f(){
	int a = 0, i = 1, suma=0;
	while(suma + a+i <= t){
		a += i;
		suma += a;
		++i;
	}
	return (i-1);
}

int main(){
	scanf("%d", &t);

	printf("%d", f());

	return 0;
}