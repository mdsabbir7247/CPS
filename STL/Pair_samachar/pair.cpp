#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define pii pair<int,int>
#define pll pair<long long>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
#define test_case int t; cin >> t; while(t--)
#define io freopen("inputs.txt", "r", stdin);freopen("outputs.txt", "w", stdout);

bool cmp (pair<int,int> a, pair<int,int> b){
	
	if(a.first==b.first) return a.second < b.second;
	else return a.first<b.first;
}

int main ()
{ ios
      vector<pair<int,int>> p;
      
      int x,y; 
      for(int i=0; i<5; i++) {
             cin >> x >> y;
             p.push_back({x,y});        
                }
      sort(p.begin(),p.end(),cmp);
      
      for(auto &x:p) cout << x.first <<" " << x.second << nl;
 
 return 0;
}
/*before submit
check constraints*/


/*
struct cmp {
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) {
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first; 
    }
};
*/