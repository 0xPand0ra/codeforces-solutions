#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, s, mi, ma;
	vector<int>v;
	scanf("%d %d", &n, &s);
	v.push_back(s);
	mi = s, ma = s;
	for(int i=0;i<n-1;++i){
		scanf("%d", &s);
		v.push_back(s);
		mi = min(mi, s), ma = max(ma, s);
	}
	int mil, mal;
	for(int i=0;i<n;++i)
		if(v[i] == mi) mil = i;
	for(int i=0;i<n;++i)
		if(v[i] == ma){ mal = i; break;}

	mal < mil ? cout << mal + n - mil - 1 : cout << mal + n-2 - mil;
	return 0;
}
