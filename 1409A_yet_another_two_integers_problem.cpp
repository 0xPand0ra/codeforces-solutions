//time = 124 ms 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b, n;
	cin >> t;
	for(int i=0;i<t;++i){
		cin >> a >>b;
		n = abs(a-b);
		n%10==0 ? cout << n/10<<endl : cout << n/10 + 1<<endl;
	}
	return 0;
}
