#include <iostream>
#include <set>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	char s[n];
	scanf("%s",s); 
	set<char> a;
	for(int i=0;i<n;++i)
		a.insert(tolower(s[i]));
	a.size() == 26 ? printf("YES") : printf("NO");
	
	return 0;
}
