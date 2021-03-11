#include <iostream>

using namespace std;

int main(){

	int n, a, b, rooms=0;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a >>b;
		b-a >=2 ? ++rooms : rooms+=0;
	}
cout << rooms;	
	return 0;
}
