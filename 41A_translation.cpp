#include <iostream>

using namespace std;

int main(){
	string s, s1="",  t;
	cin >> s>>t;

	for(int i = s.length()-1;i>-1;--i)
		s1.push_back(s[i]);
	s1 == t ? cout << "YES" : cout <<"NO";
	return 0;
}
