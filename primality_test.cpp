#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define pii pair<int,int>
#define pll pair<long long>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin >> t; while(t--)
 bool isPrime(int n){
    if(n==1 || n==0) return false;
    for(int i=2;i*i<=n;i++){
       if(n%i==0) return false;
    }
    return true;
 }
int main ()
{ ios
      int n; cin >> n;
      if(isPrime(n)){
        cout << "Prime\n";
      }
      else
      cout << "NO\n";

 return 0;
}
/*before submit
check constraints*/