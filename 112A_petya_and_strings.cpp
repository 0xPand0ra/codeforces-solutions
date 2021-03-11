#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string a, b;
	cin >> a >>b;
	vector<char> va;
	vector<char>  vb;
	for(int i=0;i<a.length(); ++i){
		va.push_back(a[i]);
		va[i] = tolower(va[i]);
	}
	for(int j=0;j<b.length();++j){
		vb.push_back(b[j]);
		vb[j] = tolower(vb[j]);
	}
	int i = min(vb.size(), va.size()), j=0;
	while(int(va[j]) == int(vb[j]) and j != i-1 )
		++j;
	if(int(va[j]) == int(vb[j]) and va.size() == vb.size()) cout << 0;
	else{
		if(int(va[j]) > int(vb[j])) cout << 1;
		else cout << -1;

	}
	return 0;
}
