#include <iostream>
#include <set>
using namespace std;
int main(){
	set<int> s;
	int year, y;
	cin >>  year;
	while(s.size()!=4){
		s.clear();
		++year;
		y = year;
		for(int i=0;i<4;++i){
			s.insert(y%10);
			y = (y-y%10)/10;
		}
	}
	cout << year;

	return 0;
}
	
