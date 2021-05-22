/*
 * TIME = 31 ms
 * AUTHOR: https://github.com/HueOne
 */
#include <bits/stdc++.h>
using namespace std;

vector<int> v;

pair<int, int> f(){
	int a=0, b=0, m;	
 	bool t = true;
	while(v.size()){
		v[0] > v[v.size()-1] ? m = 0 : m = v.size()-1;
		if(t) {a += v[m]; t = false;}
		else {b += v[m]; t = true;}
		v.erase(v.begin()+m);
	}
	return make_pair(a, b);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t;++i){
		int a;
		scanf("%d", &a);
		v.push_back(a);
	}
	pair<int, int> p;
	p = f();
	printf("%d %d\n",p.first , p.second );

	return 0;
}