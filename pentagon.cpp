#include <bits/stdc++.h>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int s1 = S[0] - 'A', s2 = S[1] - 'A';
    int t1 = T[0] - 'A', t2 = T[1] - 'A';

    int dist1 = min(abs(s1 - s2), 5 - abs(s1 - s2));
    int dist2 = min(abs(t1 - t2), 5 - abs(t1 - t2));

    if(dist1 == dist2)
        cout << "Yes"<< endl;

    else
        cout <<"No" <<endl;

    return 0;
}

