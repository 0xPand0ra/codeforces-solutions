/*
  time = 15 ms
  author: https://github.com/HueOne
*/
#include <bits/stdc++.h>
using namespace std;

bool f(int n){
  if(n%2)
    return false;
  return true;
}

int main(){
  int n;
  scanf("%d", &n);
  f(n) ? printf("Mahmoud\n") : printf("Ehab\n");

  return 0;
}
