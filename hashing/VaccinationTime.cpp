/*

A global pandemic is on the rise. But, somehow a vaccine came to rescue the people in despair. However some of the vaccines available are 'incorrect' (i.e. not upto the mark) and doesn't cure the infected person. Your job is to identify the total number of 'incorrect vaccines' from a grid of available vaccines. An "incorrect vaccine" is one which has an odd number printed on it. All the other vaccine are assumed to be correct.

You will be given a grid of size M X N containing integers and Q queries where each query contains four integers - l1, r1, l2, r2.  For each query you need to answer the number of incorrect vaccines from index (l1, r1) to (l2, r2) in the grid.

Can you help the people and save the world !!

Note: Assume 1-based indexing.

Constraints:

1 <= N <= 103

1 <= M <= 103

1 <= Ai <= 109

https://www.hackerearth.com/problem/algorithm/vaccination-time/

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int input[m+1][n+1];
    for(int i=1;i<=m;i++){
        for(int j=1; j<=n; j++){
            cin>>input[i][j];
        }
    }
    int hash[m+1][n+1];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            int temp = hash[i-1][j] + hash[i][j-1] - hash[i-1][j-1];
            hash[i][j] = (input[i][j] % 2 == 0) ? temp : temp + 1;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        cout<<hash[l2][r2] - hash[l1-1][r2] - hash[l2][r1-1] + hash[l1-1][r1-1]<<endl;
    }
}
