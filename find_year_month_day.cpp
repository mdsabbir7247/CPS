#include<bits/stdc++.h>
using namespace std;

int main()
{
    int day;cin>>day;
    int year = day/365;
        day = day - 365*year;
    int  month = day/30;
        day=day-30*month;

    cout<<year<<" "<<month<<" "<<day;

    return 0;
}
