/*
 time = 15 ms
 author: https://github.com/HueOne
 */

 #include <bits/stdc++.h>
using namespace std;

bool f(vector<int> v){
  bool b = true;
  if(v.size()%2 == 0){
    pair<bool, bool> p;
    p.first = false;
    p.second = false;
    for(int i=0; i < v.size(); ++i){
      if(v[i]%2 == 1) p.first = true;
      else p.second = true;
    }
    if(p.first and p.second)
      return true;
    return false;
  }
  else{
    for(int i = 0; i<v.size(); ++i){
      if(v[i]%2 == 1) return true;
    }
      return false;
  }
}

int main(){
  int t, a, b;
  scanf("%d", &t);
  for(int i=0; i<t; ++i){
    vector<int> v;
    scanf("%d", &a);
    for(int j=0; j<a; ++j){
      scanf("%d", &b);
      v.push_back(b);
    }
    f(v) ? printf("YES\n") : printf("NO\n");
  }

  return 0;
}
