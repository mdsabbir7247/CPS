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
      
      map<int,string> mp;
      mp[1]="mango";
      mp[3]="coconat";
      mp.insert({2,"pineapple"});
      
      for (auto &x : mp) cout << x.first << " " << x.second << nl;
      
      cout << "Unordered Map" << nl;

       unordered_map<int,string> ump;//last in first out
      ump[1]="mango";
      ump[3]="coconat";
      ump.insert({2,"pineapple"});
      
      for (auto &x : ump) cout << x.first << " " << x.second << nl;
      
      cout << "Multi_map" << nl;
       
      multimap<int,string> mmp;
      mmp.insert({1,"mango"}); // in [] not work cause key will be different
      mmp.insert({3,"banana"});
      mmp.insert({2,"pineapple"});
      mmp.insert({1,"Lyches"});
      
      for (auto &x : mmp) cout << x.first << " " << x.second << nl;
            
      // .count(); .erase(); .find() perform in map
      
 return 0;
}
/*before submit
check constraints*/