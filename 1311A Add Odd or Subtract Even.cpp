//author: github.com/HueOne
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, a, b, steps=0;
	cin >> t;
	for(int i=0;i<t;++i){
		cin >> a >>b;
		if(a-b > 0) cout << 1 + (a-b)%2<<endl;
		else if(b-a > 0) (b-a)%2==0 ? cout << 2 <<endl : cout << 1 << endl;
		else cout << 0 << endl;
	}

	return 0;
}
