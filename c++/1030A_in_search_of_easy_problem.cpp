#include <iostream>
using namespace std;
int main(){
	int n;
	bool a, b=false;
	cin >> n;
	for(int i=0;i<n;++i){
		cin >> a;
		if(a==true) b = true;
	}
	b == true ? cout << "HARD" : cout << "EASY";

	return 0;
}
