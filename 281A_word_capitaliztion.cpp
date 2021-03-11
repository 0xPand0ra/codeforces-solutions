#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<char> t;
	string s;
	cin >> s;
	for(int i=0;i<s.length();++i)
		t.push_back(s[i]);
	t[0] = toupper(t[0]);
	for(int i=0;i<t.size();++i)
		cout << t[i];

	return 0;
}

