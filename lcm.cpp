#include<bits/stdc++.h>
using namespace std;
int lcm(int x , int y){
    return (long long)x*y/__gcd(x,y);
}
int main () {
    int x,y; cin >> x >> y;

    cout << lcm(x,y);
}