/*
 * author https://github.com/HueOne
 * time = 31 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
         int n, s=0, i=2, steps=0;
         scanf("%d", &n);
	 vector<int>v;
         if(n%2==1){
		 for(int i=0;i<n-3;i+=2)
			v.push_back(2);
		 v.push_back(3);
	 	 printf("%d\n", v.size());
		 for(int i=0;i<v.size();++i)
			 printf("%d ", v[i]);
	 }
	 else{ 
		 printf("%d\n", n/2);
		 for(int i=0;i<n/2;++i)
			printf("2 ");
	 }
	 return 0;
}
