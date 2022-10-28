#include <iostream>
using namespace std;

int main(){

	int n,a,b, c=0, tram=0;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >>b;
		tram-=a, tram+=b;
		c = max(tram,c);
	}
	cout << c;

	return 0;
}
