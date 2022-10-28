/*
 * TIME = 15ms
 * AUTHOR: https://github.com/HueOne
 */

#include <bits/stdc++.h>
using namespace std;

int n;

int f(){
	int arr[n][n];

	for(int i=0;i<n;++i)
		arr[0][i] = 1;

	for(int i=1; i<n; ++i){
		for(int j=0; j<n; ++j){
			j == 0 ? arr[i][0] = 1 : arr[i][j] = arr[i][j-1] + arr[i-1][j];
		}
	}

	return arr[n-1][n-1];
}

int main(){
	scanf("%d", &n);
	printf("%d\n",f());
	return 0;
}
