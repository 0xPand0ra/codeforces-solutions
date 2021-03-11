#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> s;
	int a, b,c, p=0;
	cin >> a >>b;
	for(int i=0;i<a;++i){
		cin >> c;
		s.push_back(c);
}
	for(int i=0;i<a;++i)
		if(s[i] >= s[b-1] and s[i] > 0) ++p;
	cout << p;


	return 0;
}
