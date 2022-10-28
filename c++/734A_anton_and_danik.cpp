#include <iostream>
using namespace std;
int main(){
	int a, an=0, da=0;
	cin >> a;
	string s;
	cin >>s;
	for(int i=0;i<a;++i)
		s[i] == 'A' ? ++an : ++da;
	if(an > da) cout << "Anton";
	else if(an < da) cout << "Danik";
	else cout <<"Friendship";
	
	return 0;
}
