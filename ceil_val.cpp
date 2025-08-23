#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a = 10;
    int b = 3;

    //int ans = ceil((float)a/b);

    int ans = (a/b) + !!(a%b);

    cout << ans <<endl;

    return 0;
}
