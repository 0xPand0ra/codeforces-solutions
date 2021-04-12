// author: https://github.com/HueOne
// time: 436 ms
#include <bits/stdc++.h>
using namespace std;


int main(){
	int t,n,gcd=1;
	cin >> t;
	for(int i=0;i<t;++i){
		cin >> n;
		bool tab[n+1];
		for(int j=2;j<n+1;++j){
			for(int k=j+j;k<n+1;k+=j)
				gcd = j;
		}

		cout << gcd <<endl;
	}
}
