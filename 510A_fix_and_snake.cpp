#include <iostream>
#define h '#'
#define k '.'

using namespace std;
int main(){
	int a, b;
	cin >> a>>b;
	string l = "", l1="", l2="";
	for(int i=0;i<b;++i){
		l+=h;
		i == 0 ? l2+='#' : l2+='.';
		i == b-1 ? l1+='#' : l1+='.';
	}
	for(int i=1;i<=a;++i){
		if(i%2==1) cout << l<<endl;
		else i%4==0 ? cout << l2 <<endl : cout << l1 <<endl;
	}
	return 0;
}
