#include <iostream>
using namespace std;
int main(){
	string l = "I love", h = "I hate", t = " that ", i = " it", s="";
	int n;
	cin >> n;
	for(int j=0;j<n;++j){
		j%2==0 ? s+=h : s+=l;
		j<n-1 ? s+=t : s+=i;
	}
	cout << s;
	
	return 0;
}
