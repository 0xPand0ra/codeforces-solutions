#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, a, b, s=0;
	scanf("%d", &n);
	vector<vector<int> >v;
	v = vector<vector<int> > (n);
	for(int i=0;i<n;++i){
		scanf("%d %d", &a, &b);
		v[i].push_back(a), v[i].push_back(b);
	}	
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			if(i!=j) if(v[i][0] == v[j][1]) ++s;	

	printf("%d", s);
	return 0;
}
