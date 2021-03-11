#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n, t;
	string s;
	cin >> n >>t>>s;
	for(int i=0;i<t;++i){
		for(int j=1;j<s.length();++j){
			if (s[j-1] == 'B' and s[j] == 'G'){
			       	swap(s[j-1],s[j]);
	       			if(j<s.length()-1)++j;
			}
		}
	}

	cout <<s;

	return 0;
}
