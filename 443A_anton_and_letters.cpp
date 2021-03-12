#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	string s;
	set<char>a;
	getline(cin, s);;
	for(int i=1;i<s.length()-1;++i)
		if((int)s[i] < 123 and (int)s[i] > 60) a.insert(s[i]);
	cout << a.size();
	return 0;
}
