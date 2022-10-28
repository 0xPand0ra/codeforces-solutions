#include <iostream>

using namespace std;

int main(){
	string s0, s1, s3="";
	cin >> s0 >> s1;
	for(int i=0;i<s0.length();++i)
		s0[i]==s1[i] ? s3+='0' : s3+='1';
	cout << s3;

	return 0;
}
