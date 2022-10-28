#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int n, z=0;
	cin >> n;
	string s;
	vector<string>v;
	for(int i=0;i<n;++i){
		cin >> s;
		v.push_back(s);
	}
	cout << endl;
	for(int i=0;i<n;++i){
		if(v[i].length() == 1) cout << 1 << endl << v[i] <<endl;
		else{
			for(int j=0;j<v[i].length();++j)
				if(v[i][j] !='0')++z;
			cout << z<<endl;
			for(int j=0;j<v[i].length();++j)
				if(v[i][j]!='0') cout << ((int)v[i][j]-48)*pow(10, v[i].length()-1-j)<<" ";
			cout << endl;
			z=0;
		}
	}
	return 0;
}
