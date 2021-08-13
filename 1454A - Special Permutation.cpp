/*
	author: https://github.com/HueOne
*/
#include <bits/stdc++.h>
using namespace std;

void iter(vector<int>v){
	for(int i=0; i<v.size(); ++i){
		printf("%d ",v[i]);
	}
	printf("\n");
}

void f(){
	int n;
	scanf("%d", &n);
	vector<int> v;
	for(int i=0; i<n; ++i){
		if(i==n-1){
			v.push_back(1);
		}
		else{
			v.push_back(i+2);
		}
	}
	iter(v);
}

int main(){
	int n;
	scanf("%d", &n);	
	for(int i=0; i<n; ++i)
		f();
	

	return 0;
}