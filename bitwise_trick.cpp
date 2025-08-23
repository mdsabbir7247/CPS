#include<bits/stdc++.h>
using namespace std;
int power_of2(int n){
    return n>0 && (n&(n-1))==0;//return 0 or 1
}

bool kth_bit_on_or_of(int n,int k) {
    return n & (1<<k);
}

int set_kth_bit(int n,int k) {
    return n | (1<<k);
}

int unset_kth_bit(int n,int k) {
    return n & ~(1<<k);
}

int kth_bit_toggle(int n,int k){
    return n ^ (1<<k);
}
int main () {
    int n; cin >> n;
    // check the num is even or odd
    // for (int i=1; i<=n; i++){
    //     if(i&1==1){
    //         cout << i <<" ";
    //     }
    // }
    //check if num power of 2 or not

    // if(power_of2(n)) cout << "power of 2\n";
    // else
    // cout <<"n is not power of 2\n";

    // check the Kth bit on or of 
    // int k; cin >> k;
    // if(kth_bit_on_or_of(n,k)) cout << "YES\n";
    // else
    // cout << "NO\n";

    //set the kth bit
    // int k; cin >> k;
    // cout << set_kth_bit(n,k);

    //unset the kth bit
    // int k; cin >> k;
    // cout << unset_kth_bit(n,k);

    // kth bit toggle
    // int k; cin >> k;
    // cout << kth_bit_toggle(n,k);

    //if i want toggle all the bit so i just do !n
    // 01010
    // 10101

    // multiplication
    // n*2^1 == n<<2^k
    // 10*8 == 10<<3
    //cout << (n<<3);

    // division 
    // n/2^2 == n>>k
    //10/4 == 10 >> 2
    
    //set bit count
    //cout << __builtin_popcount(n)<<"\n";
    //highest set bit
    //cout << __lg(n);
   

    return 0;
}
