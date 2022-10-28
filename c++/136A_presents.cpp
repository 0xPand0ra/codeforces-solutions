#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, p;
	cin >> n;
	vector<int> v;
	v = vector<int> (n);
	for(int i=0;i<n;++i){
		cin  >> p;
		--p;
		v[p] = i;	
	}
	for(int i=0;i<n;++i)
		cout << v[i]+1 <<" ";

	return 0;
}
