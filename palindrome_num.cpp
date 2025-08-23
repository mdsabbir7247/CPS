#include<bits/stdc++.H>

using namespace std;

int main () {
    int num ; cin >> num;
    int k_num = num;
    int store;

    while(num != 0)
    {
        int rem = num%10;
        store = store * 10 + rem;

        num/=10;
    }
    if(k_num == store)
        cout <<"Palindrome"<<endl;
    else
        cout <<"No";

return 0;
}
