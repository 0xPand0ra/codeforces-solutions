#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

	int cas;
	cin >> cas;
	string s;
	cin >> s;
	vector<char> tab;
	for(int i=0;i<cas;++i)
		tab.push_back(s[i]);
	int e=0;
	for(int i=1;i<tab.size();++i){
		if(tab[i-1] == tab[i] and tab.size()>1) {
			tab.erase(tab.begin()+i);
	       		i=0;
	       		++e;
		}
	}
	cout << e;

	return 0;
}

