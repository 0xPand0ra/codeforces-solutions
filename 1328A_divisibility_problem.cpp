#include <iostream>
using namespace std;
int main(){
	int n, a, b;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%d %d", &a, &b);
		a%b == 0 ? cout << 0<<endl : cout << b - a%b<<endl;
	}
	return 0;
}
