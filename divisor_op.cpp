#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int num;cin >> num;

    for(int i = 1; i*i <= num; i++)
    {
        if(num%i == 0)
        {
            cout << i <<endl;
            if(i!=num/i) cout << num/i << "\n";
        }
    }

    return 0;
}
