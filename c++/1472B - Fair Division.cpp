/*
    time = 46 ms
    author: https://github.com/HueOne
*/

#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> v){
    int p1=0, p2=0;
    for(int i=0; i<v.size(); ++i)
        v[i]==1 ? ++p1 : ++p2;
    if(p1%2==1)
        return false;
    if((p2%2 == 0) or (p2%2 == 1 and p1))
        return true;

    return false;
}

int main(){
    int t, n, x;
    scanf("%d", &t);
    for(int i=0; i<t; ++i){
        vector<int> v;
        scanf("%d", &n);
        for(int j=0; j<n; ++j){
            scanf("%d", &x);
            v.push_back(x);
        }
        f(v) ? printf("YES\n") : printf("NO\n");
    }

    return 0;
}
