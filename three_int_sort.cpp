#include<bits/stdc++.h>

using namespace std;

int main ()

{
    int a, b, c,mn,mid,mx; cin  >> a >> b >> c;

     /*
     if (a <= b && a <= c) {
        mn = a;
        if (b <= c) {
            mid = b;
            mx = c;
        } else {
            mid = c;
            mx = b;
        }
    } else if (b <= a && b <= c) {
        mn = b;
        if (a <= c) {
            mid = a;
            mx = c;
        } else {
            mid = c;
            mx = a;
        }
    } else {
        mn = c;
        if (a <= b) {
            mid = a;
            mx = b;
        } else {
            mid = b;
            mx = a;
        }
    }*/
    //approch
    int tmp;
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a > c){
        tmp = a;
        a = c;
        c = tmp;
    }

    if(b > c){
        tmp = b;
        b = c;
        c = tmp;
    }

    cout << a <<" " << b << " " << c << endl;

    return 0;
}

