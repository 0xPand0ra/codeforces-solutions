// author: https://github.com/HueOne
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a;
	vector<int> v;
	cin >> n;
	for(int i=0;i<n;++i){
		v.clear();
		for(int j=0;j<3;++j)
			cin >> a, v.push_back(a);
		sort(v.begin(), v.end());
		if((v[0]!=v[1] and v[1]!=v[2])or(v[0]==v[1] and v[1]!=v[2])) 
			cout << "NO\n";
		else
			v[0]==v[1]and v[1]==v[2] ? printf("YES\n%d %d %d\n", v[0],v[1],v[2]) : printf("YES\n%d %d %d\n", 1,v[0],v[2]);
	}

	return 0;
}