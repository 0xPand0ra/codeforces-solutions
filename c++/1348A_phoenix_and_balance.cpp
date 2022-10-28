/*
 * author https://github.com/HueOne
 * time = 15 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, t1, s1, s2;
	scanf("%d", &t);
	vector<int> v;
	for(int i=0;i<t;++i){
		v.clear();
		s1 = 0, s2 = 0;
		scanf("%d", &t1);
		for(int j=0;j<t1;++j)
			v.push_back(pow(2,j+1));
		s1+=v[v.size()-1], s2+=v[v.size()-2];
		v.erase(v.begin() + v.size()-1);
		v.erase(v.begin() + v.size()-1);
		for(int j=0;j<v.size();++j)
			j < v.size()/2 ? s1+=v[j] : s2+=v[j];
		printf("%d\n", abs(s1-s2));
	}

	return 0;
}
