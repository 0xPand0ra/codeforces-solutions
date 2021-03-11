#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string s;
	cin >> s;
	vector<char>v;
	int u=0,l=0;
	for(int i=0;i<s.length();++i){
		v.push_back(s[i]);
		if(v[i] > 40 and v[i] < 91) ++u;
		else ++l;
	}
	if( u > l){
		for(int i=0;i<v.size();++i){
			v[i] =  toupper(v[i]);
			cout << v[i];
		}
	}
	else{
		for(int i=0;i<v.size();++i){
			v[i] =  tolower(v[i]);
			cout << v[i];
		}
	}		
	return 0;
}

