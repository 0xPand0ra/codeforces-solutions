/*
 * author https://github.com/HueOne
 * time = 31 ms
 * GNU c++17
 */  
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	vector<int> v;
	v.push_back(a), v.push_back(b), v.push_back(c);
	sort(v.begin(), v.end());
	printf("%d\n", v[2]-v[1] + v[1]-v[0]);
	return 0;
}
