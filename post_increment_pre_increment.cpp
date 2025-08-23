#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int a = 10;
    int b = 11;
    int c = 12;

    int ans = (a++) + (b++) + (--c) + (--a) + (--b) + (c++);

    cout << ans <<endl;

    return 0;

}
