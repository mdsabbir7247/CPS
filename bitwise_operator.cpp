#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a = 12;
    int b = 10;

    int ans = a|b;
    int ans1 = a&b;
    int ans2 = !a;//if a = -5 then show same result like 5;
    int ans3 = a^b; //xor operation

    cout << ans << "\n" << ans1 << "\n" << ans2 << "\n" << ans3 << endl;

    return 0;
}
//binary or octal or hexa te input newo ar tecnique
/*
int a = 0b101 for binary
int a = 0x B for hexa
int a = 0 for octal;
*/
