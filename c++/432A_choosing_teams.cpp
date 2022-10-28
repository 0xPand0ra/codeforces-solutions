/*
 * author https://github.com/HueOne
 * time = 31 ms
 * GNU c++17
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, t, y;
	scanf("%d %d", &n, &t);
	vector<int> v;
	for(int i=0;i<n;++i){
		scanf("%d", &y);
       		if(y+t<=5) v.push_back(y);
	}
	printf("%d", v.size()/3);
	return 0;
}
