/*
 * author: https://github.com/HueOne
 * time = 30 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, x, y, a, ma, mi;
	scanf("%d", &t);
	for(int i=0;i<t;++i){
		scanf("%d %d", &x, &y);
		ma = max(x,y), mi = min(x,y);
		if(ma==mi) a = ma*2, a*=a;
		else if(ma == mi*2 or ma > mi*2) a = pow(ma, 2);
		else if(ma < mi*2) a = pow(mi*2,2);
		printf("%d\n",a); 
	}
	return 0;
}
