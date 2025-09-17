#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define pii pair<int,int>
#define pll pair<long long, long long>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin >> t; while(t--)
//#define io freopen("inputs.txt", "r", stdin);freopen("outputs.txt", "w", stdout);

//complexity O(long n).

ll exponential(int a,int n){
    //base case
    if(n==0) return 1;
    
    ll res = exponential(a,n/2);
    
    if(n&1) return res*res*a;
    else return res * res;
}


//**faster than recursion.

ll binpow(ll int a,int n){
    ll res = 1;
    
    while(n>0){
        if(n&1) res = res*a;
        
        a= a*a;
        n>>=1;
    }
    
    return res;
}

// for big value (a=10e18+7 or b = 100,..);

ll binpow(ll a, ll b, int m){
    a%=m;
    
    int ans = 1;
    
    while(b>0){
        
        if(b&1) ans*ans*a%m;
        
        a=a*a%m;
        
        b>>=1;
    }
    
    return ans ;
}


int main ()
{ ios
    
    int a,n; cin >> a >> n;
    
   ll ans = exponential(a,n);
   
   ll res = binpow(a,n);
   
   cout << ans << " " << res << nl;
   
 return 0;
}
/*before submit
check constraints*/