#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int num;
    cin >> num;
    int sum = 0;
    while(num != 0)
    {
        int mod = num%10;

        sum += mod;

        num = num/10;
    }
        cout << sum;

    return 0;

}
