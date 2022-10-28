/*
  time = 30 ms
  author: https://github.com/HueOne
*/

#include <bits/stdc++.h>
using namespace std;

int f(int h, int m){
  h*=60;
  h+=m;
  return (24*60 - h);
}

int main(){
  int t, m, h;
  scanf("%d", &t);
  for(int i=0; i<t; ++i){
    scanf("%d %d", &h, &m);
    printf("%d\n", f(h, m));
  }

  return 0;
}
