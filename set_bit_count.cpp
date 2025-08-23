#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define pii pair<int,int>
#define pll pair<long long>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin >> t; while(t--)
#define io freopen("inputs.txt", "r", stdin);freopen("outputs.txt", "w", stdout);

int set_bit_count(int x){
   int cnt=0;
   while(x){
      x=x & (x-1); // eleminates lowest set bit each iteration
      cnt++;
   }
   return cnt;
}
//brain kernighan's algorithm
//complexity O(sets bit)

int main ()
{ ios
      int n; cin >> n;
      cout << set_bit_count(n);
      
 return 0;
}
/*before submit
check constraints*/