#include<bits/stdc++.h>
using namespace std;

int minCost(int &n,int &m, int &a,int &b){
    // My Approach
    /*
    int x; // min cost
    int y,k;

    if(n==m)
    return b;
    else if(n<m){
        x=n*a;
        return min(x,b);
    }
    else
    y=n/m;
    x=n%m;
    k=y*b+x*a;
    x=n*a;
    return k<x && k<(y+1)*b?k:x<(y+1)*b?x:(y+1)*b;
    */

   // Dwaipayan Da's solution

   int x=(n/m)*b+min(b,(n%m)*a);
    return min(x,n*a);
}

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    cout<<minCost(n,m,a,b);

    return 0;
}