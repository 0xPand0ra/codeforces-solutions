#include <iostream>
using namespace std;
int main(){
	int m, n;
	cin >> m;
	for(int i=0;i<m;++i){
		cin >> n;
		n > 2 ? cout<<n/2 -(1- n%2)<<endl: cout << 0 <<endl;
	}
	return 0;
}
