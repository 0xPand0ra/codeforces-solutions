#include <iostream>
using namespace std;
int main(){	
	int a, x=-1, y=0, x1, y1;
	for(int i=0;i<25;++i){
		cin >> a;
		++x;
		if(a == 1) x1 = x, y1=y;
		if(x==4) ++y, x = -1;
	}
	cout << max(x1, 2) - min(x1,2) + max(y1,2) - min(y1,2);


	return 0;
}
