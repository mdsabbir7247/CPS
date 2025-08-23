#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int num ; cin >> num;
    int bc = num;
    int arm = 0;
    int cnt = 0;
    for(int i = num; i>0; i/=10)
    {
        cnt++;
    }

    while(num != 0)
    {
        int rem = num%10;

        arm += pow(rem,cnt);
        num/=10;
    }

    if(bc == arm)
        cout <<"Armstrong";
    else
        cout <<"No";

    return 0;
}
//153 3ta digit ace so 1^3+5^3+3^3 = 153
//92727 5ta digit ace so 9^5+2^5+7^5+2^5+7^5 = 92727
