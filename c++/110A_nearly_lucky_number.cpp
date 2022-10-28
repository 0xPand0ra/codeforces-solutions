#include <iostream>

using namespace std;
int main(){
	int l=0;
	string n;
	cin >>n;
	for(int i=0;i<n.length();++i)
		if(n[i] == '4' or n[i] == '7')++l;
	l==7 or l==4 ? cout <<"YES" : cout << "NO";
	return 0;
}
