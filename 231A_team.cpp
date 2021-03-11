#include <iostream>
using namespace std;
int main(){
	int a, b , c, d, e=0;
	cin >> d ;
	for(int i=0;i<d;++i){
		cin >> b >> c >> a;
		if(a+b+c > 1) ++e;
	}
	cout << e;

	return 0;}

