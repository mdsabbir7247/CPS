#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define pii pair<int,int>
#define pll pair<long long>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin >> t; while(t--)
#define io freopen("inputs.txt", "r", stdin);freopen("outputs.txt", "w", stdout);

int main ()
{ ios
      int n; cin >> n;
      
      map<int,int> mp;
      
      while(n--) {
      	int x; cin >> x;
      	mp[x]++;
      }
      for(auto &x:mp) {
      	cout << x.first << " " << x.second << nl;
      }
 return 0;
}
/*before submit
check constraints*/