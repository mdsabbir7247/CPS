#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n = 10;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            for(int k = i; k<=n; k++)
            {
                if(i*i + j*j == k*k && i <= j)
                {
                    cout <<i <<" "<<j <<" "<<k<<endl;
                }
            }

        }
    }

    return 0;
}
//3^2 + 4^2 == 5^2
//9 + 16 == 25
