#include <iostream>
#include <set>
using namespace std;
int main(){
	set<int> a;
	int s;
	for(int i=0;i<4;++i){
		scanf("%d", &s);
		a.insert(s);
	}
	cout << 4 - a.size();

	return 0;
}
