// time = 31 ms
#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned int t, n, s1,s2, a1, a2;
	vector<int> v1, v2;
	scanf("%d", &t);
	for(int i=0;i<t;++i){
		scanf("%d", &n);
		v1.clear(), v2.clear();
		for(int j=2, k=1;j<=n;j+=2, k+=2)
			v2.push_back(j), v1.push_back(k);
		s2 = (2 + n)*n/4, s1 = n*n/4;
		v1[v1.size()-1]+=s2-s1;
		if(s2 >= s1 and (s2-s1)%2 == 0){
			printf("YES\n");
			for(int k=0;k<n/2;++k)
				printf("%d ", v2[k]);
			for(int k=0;k<n/2;++k) printf("%d ", v1[k]);
			printf("\n");
		}
		else printf("NO\n");
	}	
				

		return 0;	
}
