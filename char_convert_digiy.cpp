#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char a,b,c;cin>>a>>b>>c;//a=1,b=2,c=3
    int abc = (a-'0')*100 + (b-'0')*10 + (c-'0')*1;
    int bac = (b-'0')*100 + (a-'0')*10 + (c-'0')*1;
    int cab = (c-'0')*100 + (b-'0')*10 + (a-'0')*1;
    cout<<abc+bac+cab;
    return 0;
}

