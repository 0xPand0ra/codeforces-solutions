/*
  time = 15 ms
  author: https://github.com/HueOne
*/
#include <bits/stdc++.h>
using namespace std;

int f(vector<int> v){
  int number;
  pair<int, int> one, two;
  one.first = 0;
  one.second = 1;
  two.second = 0;
  for(int i=1; i<v.size(); ++i)
    v[i] != v[one.first] ? two.first = i, ++two.second : ++one.second;

  if(one.second > two.second)
    return two.first + 1;
  return one.first + 1;
}

int main(){
  int t, t2, a;
  scanf("%d", &t);
  for(int i=0; i<t; ++i){
    vector<int> v;
    scanf("%d", &t2);
    for(int j=0; j<t2; ++j){
      scanf("%d", &a);
      v.push_back(a);
    }
    printf("%d\n", f(v));
  }

  return 0;
}
