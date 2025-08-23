#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define pii pair<int,int>
#define pll pair<long long>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin >> t; while(t--)
 
/*ll gcd(ll x , ll y){
    ll g;
    for(int i=1; i<min(x,y); i++) {
        if(x%i==0 && y%i == 0) g=i;
    }
    return g;
}*/

ll gcd(ll x , ll y){
    if(x==0) return y;
    return gcd(y%x,x);//or gcd(y-x,x)
}
//comlexity(log min(x,y))
// algo name Euclidean

// builtin function __gcd(a,b);
int main ()
{ ios
    int x , y; cin >> x >> y;
      cout << gcd(x,y)<<nl;
 return 0;
}
/*before submit
check constraints*/