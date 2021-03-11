#include <iostream>
using namespace std;

int main(){
	int x, s=0;
	cin >> x;
       	if(x>=5) x%5 == 0 ? cout << x/5 : cout << x/5+1;	
	else cout <<1;	

	return 0;
}
