/*
 time = 31 ms
 author: https://github.com/HueOne
 */
#include <bits/stdc++.h>
using namespace std;

int f(int t){
	vector<int> v;
	for(int i=1; i<= t/2; ++i){
		if(t%i == 0) v.push_back(i);
	}

	return v.size();
}

int main(){
	int t;

	scanf("%d", &t);
	printf("%d", f(t));

	return 0;
}
