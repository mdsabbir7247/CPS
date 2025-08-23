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
      multiset<int> st;
      
     for(int i=0; i<n; i++) {
         int x; cin >> x;
         st.insert(x);           
               }
     	
     for(int i=1; i<n; i++){
     	if(st.find(i) != st.end()){
     		st.erase(st.find(i));
     	}
     }
     
     for(auto &x:st) cout << x <<" ";
     
     cout << nl;
 
     auto it = prev(st.end());
 	 cout << *it << nl;
      
      cout << *st.upper_bound(10) << nl;//10> 
      cout << *st.lower_bound(4) << nl; // 4>=
 return 0;
}
/*before submit
check constraints*/