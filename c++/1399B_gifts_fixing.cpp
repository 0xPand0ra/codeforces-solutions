/*
 * author: https://github.com/HueOne
 * time = 15 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
#define lld long long int
using namespace std;
int main(){
	lld n, n1, a, b, steps, mi1, mi2;
	vector<lld> v1, v2;
	scanf("%lld", &n);
	for(int i=0;i<n;++i){
		scanf("%lld", &n1);
		v1.clear(), v2.clear(), steps = 0;
		for(int j=0;j<n1;++j)
			scanf("%lld", &a), v1.push_back(a), j == 0 ? mi1 = a : mi1 = min(mi1, a);
	       	for(int j=0;j<n1;++j)
			scanf("%lld", &a), v2.push_back(a), j == 0 ? mi2 = a : mi2 = min(mi2, a);

		for(int j=0;j<n1;++j){
			b = min(v1[j] - mi1, v2[j] - mi2); 
			steps += b;
			v1[j] -= b, v2[j]-=b;
			steps += v1[j] - mi1;
			steps += v2[j] - mi2;
		}
		printf("%lld\n", steps);
	}
	return 0;
}
