/*
 * author: https://github.com/HueOne
 * time: 31 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	char c;
	bool bw = true;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> c;
			if(c!='W' and c!='B' and c!= 'G') bw = false;
		}
	}

	bw == true ? printf("#Black&White\n") : printf("#Color\n");

	return 0;
}