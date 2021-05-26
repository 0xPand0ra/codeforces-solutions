/*
  time = 93 ms
  author: https://github.com/HueOne
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t, n, a;
  scanf("%d", &t);
  for(int i=0; i<t ;++i){
    set<int> v;
    scanf("%d", &n);
    for(int j=0; j<n; ++j){
      scanf("%d", &a);
      v.insert(a);
    }
    printf("%d\n", v.size());
  }
  return 0;
}
