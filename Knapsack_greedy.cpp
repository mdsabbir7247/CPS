#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define nl endl
#define int_vc vector<int>
#define char_vc vector<char>
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);
int main ()
{ ios
  int t; cin >> t;
  while(t--) {
  int n,wt; cin >> n >> wt;
  int_vc p(n),w(n);

  for(auto &x:p) cin >> x;
  for(auto &x:w) cin >> x;

  int ans=0;

  while(wt>0){
    int j=0;
    for(int i=0; i<n; i++) {
        int c=p[j]/w[j];
        int n=p[i]/w[i];

        if(n>c) {
            j=i;
        }
    }
    cout << j <<"->" <<w[j]<<endl;

    if(w[j]<=wt){
        ans+=p[j];
        wt-=w[j];
        p[j]=0;
    }
    else {
        ans+=wt*p[j]/w[j];
        p[j]=0;
        wt=0;
    }
  }
  cout << ans <<endl;
}
 return 0;
}
/*before submit
check constraints*/