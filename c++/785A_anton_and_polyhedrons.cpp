#include <iostream>
using namespace std;
int main(){
	int n, a=0;
	string s;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> s;
		if(s[0] == 'T') a+=4;
		else if(s[0] == 'C') a+=6;
		else if(s[0] == 'O') a+=8;
		else if(s[0] == 'D') a+=12;
		else a+=20;
	}
	cout << a;
	return 0;
}

