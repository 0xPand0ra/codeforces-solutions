/*
    time = 31 ms
    author: https://github.com/HueOne
*/

#include <bits/stdc++.h>
#define ll unsigned int
using namespace std;

bool condition(ll a, ll b, ll c){
    if(a+b > c and b+c > a and a+c > b)
        return true;
    return false;
}

void f(ll a, ll b, ll c ,ll d){
    int x, y, z;
    x = max(a, b);
    y = max(b, c);
    z = min(c, d);
    printf("%d %d %d\n", x, y, z);
}

int main(){
    ll t, a, b, c, d;
    scanf("%d", &t);
    for(ll i=0; i<t; ++i){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        f(a, b, c, d);
    }

    return 0;
}
