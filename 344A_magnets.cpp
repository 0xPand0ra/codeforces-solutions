#include <iostream>
using namespace std;
int main(){
	int n, g=0;
	cin >> n;
	string a="",b;
	for(int i=0;i<n;++i){
		b=a;
		cin >> a;
		b!=a ? ++g : g+=0;
	}
	cout << g;

	return 0;
}
