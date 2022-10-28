/*
 * author: https://github.com/HueOne
 * time = 61 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b, c;
	scanf("%d", &t);
	for(int i=0;i<t;++i){
		scanf("%d %d %d", &a, &b, &c);
		if(c-c%a+b<=c)printf("%d\n", c - c%a + b);
		else {
			int j=1;
			while(c-c%a-j*a+b > c)
				++j;
			printf("%d\n", c-c%a-j*a+b);
		}
	}
	return 0;
}
