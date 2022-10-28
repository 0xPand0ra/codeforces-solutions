#include <iostream>
using namespace std;
int main(){

	int m, n, a;
	cin >> m>>n;

	if(m%2 == 0 or n%2 == 0)
		cout << m*n/2;
		
	else
		cout << (m-1)*(n)/2 + (n-1)/2;
	

	return 0;
}
