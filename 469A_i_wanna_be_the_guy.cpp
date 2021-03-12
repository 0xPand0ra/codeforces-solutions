#include <iostream>
#include <set>
using namespace std;
int main(){
	int n, q, p, a;
	set<int> s;
	cin >> n >>q;
	for(int i=0;i<q;++i)
		cin >> a, s.insert(a);
	cin  >> p;
	for(int i=0;i<p;++i)
		cin >> a, s.insert(a);

	s.size() == n ? cout << "I become the guy." : cout << "Oh, my keyboard!";
	return 0;
}
