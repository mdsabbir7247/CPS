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
      
      queue<string> q;
      
      	q.push("1");
      	
      for(int i=1; i<=n; i++) {
      	string s=q.front();
      	q.pop();
      	cout << i << s << nl;
      	q.push(s+'0');
      	q.push(s+'1');
      }
         
 return 0;
}
/*before submit
check constraints*/