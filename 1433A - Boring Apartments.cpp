/*
 * author: https://github.com/HueOne
 * time = 15 ms
 * GNU c++17
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, x, y;
	cin >> t;
	for(int i=0;i<t;++i){
		cin >> x;
		y = ((int)log10(x)+1);
		switch (y){
			case 1: {y = 1;break;}
			case 2: {y = 3;break;}
			case 3: {y = 6;break;}
			case 4: {y = 10;break;}
		}
		cout << (x%10-1)*10 + y<<endl; 
	}

	return 0;
}