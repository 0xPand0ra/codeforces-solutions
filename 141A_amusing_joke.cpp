#include <iostream>
#include <map>
using namespace std;
int main(){
	map<char, int> m;
	map<char, int> m0;
	   string a, b, c;
	   cin >> a >> b >>c;
	   for(int i=0;i<a.length();++i)
		   ++m[a[i]];
	   for(int i=0;i<b.length();++i)
		   ++m[b[i]];
	   for(int i=0;i<c.length();++i)
		   ++m0[c[i]];
	   bool d = true;
	   if(m.size() != m0.size()) cout << "NO";
	   else{
	   	for(auto el : m){
	   		if(el.second != m0[el.first]){
				d = false;
				break;
			}
		}
	   d == true ? cout << "YES" : cout << "NO";
	   }
	return 0;
}
