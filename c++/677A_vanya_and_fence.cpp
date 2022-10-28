#include <iostream>
using namespace std;
int main(){
	int n, h, a, b=0;
	cin >> n>>h;
	for(int i=0;i<n;++i){
		cin >> a;
		a > h ? b+=2 : ++b; 
	}
	cout <<b;

	return 0;
}
