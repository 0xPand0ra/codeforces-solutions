#include <iostream>
#include <vector>

using namespace std;

int main(){
	int k, n, w, a;
	cin >> k >> n >>w;
	a = 0;
	for(int i=1;i<=w;++i)
		a+=i*k;
	if(a-n >=0) cout << a-n;	
	else cout << 0;

	return 0;
}
