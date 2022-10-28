// time = 31 ms
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	for(int j=0;j<a;++j){
		string n, s="";
		cin >> n;
		for(int i=0;i<n.length();i+=2)
				s+=n[i];
		s+=n[n.length()-1];
		cout << s<<endl;
	}
		return 0;
}
