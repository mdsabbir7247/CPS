#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;cin>>x;

    int year = x/365;
    x = x - year*365;
    int month = x/30;
    x = x - month*30;

    cout<<year<<" "<<month<<" "<<x;


 return 0;
}
