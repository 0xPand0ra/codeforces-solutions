#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, d, e, f=0;
	cin >> a >> b >> c >> d >> e;
	++e;
	vector<bool> v;
	v = vector<bool> (e);
	for(int i=1;i<e;++i){
		if(i==a or i==b or i==c or i==d)
			for(int j=i;j<e;j+=i)
				v[j] = true;
	}
	for(int i=1;i<e;i++)
		if(v[i] == true)++f;
	cout <<f;
	return 0;
}
