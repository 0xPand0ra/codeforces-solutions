/*
 time = 30 ms
 author: https://github.com/HueOne
 */
 
#include <bits/stdc++.h>
using namespace std;

bool f(){
	int s;
	scanf("%d", &s);
	char arr[s];
	scanf("%s", arr);
	map<char, bool> m;
	for(int i=0; i<s;++i){
		if(m[arr[i]] == true and arr[i-1]!=arr[i] and i>0) return true;
		else m[arr[i]] = true;
	}
	return false;
}


int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; ++i){
		f() == true ? printf("no\n") : printf("yes\n");
	}

	return 0;
}
