#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n;cin >> n;

    for(int i = 1; i<=n; i++)
    {
        for(int k = 1; k<=n-i;k++){
            cout<<" ";
        }
        for(int j = 1; j<=2*i - 1; j++)
        {
            if(j == 1 || j == 2*i - 1)
            {
                cout <<"*";
            }
            else
            {
                cout <<" ";
            }
        }
        cout<<endl;
    }

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {

            cout <<" ";
        }
        for(int k =2*n - 2*i-1; k>=1;k--){
                if(k == 2*n - 2*i-1 || k == 1)
                {
                    cout<<"*";
                }
                else
                {
                    cout <<" ";
                }
        }
        cout<<endl;
    }


    return 0;
}
