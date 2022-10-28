/*
 time = 31 ms
 author: https://github.com/HueOne
 */

#include <bits/stdc++.h>
using namespace std;

bool f(){

	char in[3];
		scanf("%s", in);
	bool b = false;
	
	for(int i=0; i<5; ++i){
		char t[3];
		scanf("%s", t);
		if(t[0] == in[0] or t[1] == in[1]) b = true;
	}
	return b;
}

int main(){
	f() == true ? printf("YES\n") : printf("NO\n");

	return 0;
}
