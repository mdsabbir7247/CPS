#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define pii pair<int,int>
#define pll pair<long long>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin >> t; while(t--)
 
int main ()
{ ios
      int n; cin >> n;
      set<int> a;
      for(int i=1;i*i<=n;i++){
         if(n%i==0){
            a.insert(i);
            a.insert(n/i);
         }
      }
      for(auto x:a) cout << x << " ";
 return 0;
}
/*before submit
check constraints*/