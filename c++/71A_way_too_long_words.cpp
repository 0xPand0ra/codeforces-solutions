#include <iostream>
#include <string>
using namespace std;
int main(){
	int b;
	cin >> b;
	string a;
	for(int i=0;i<b;++i){
	cin >> a;
	if(a.length() > 10)
		cout << a[0] << a.length()-2<<a[a.length()-1]<<endl;
	else cout << a<<endl;
	}

	return 0;
}
