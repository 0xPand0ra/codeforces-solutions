#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	n;
 	vector<bool> v;
	v = vector<bool> (n+1);
	for(int i=2;i<=n;++i)
		if(v[i] == false)
			for(int j=i+i;j<=n;j+=i)
				v[j]=true;	
	for(int i=4;i<=n;++i)
		if(v[i] == true and v[n-i]==true){ printf("%d %d", i,n-i); break; }

	return 0;
}
