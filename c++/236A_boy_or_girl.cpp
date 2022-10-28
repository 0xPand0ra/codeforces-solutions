#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){

	string s;
	cin >> s;
	set <char> z;
	for(int i=0;i<s.length();++i)
		z.insert(s[i]);
	int b=0;
	for(auto d : z)
		++b;
	if(b%2==0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}
