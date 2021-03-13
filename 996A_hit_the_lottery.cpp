#include <iostream>
using namespace std;

int f(int n){
	int m=0;
	if(n >= 100)
		m+=n/100 + f(n%100);
	else if(n>=20)
		m+=n/20 + f(n%20);
	else if(n>=10)
		m+=n/10 + f(n%10);
	else if(n>=5)
		m+=n/5 + f(n%5);
	else m=n;
	return m;
}

int main(){
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}
