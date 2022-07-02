// Young Physicist

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
	ios_base::sync_with_stdio(false);
    int n,kx=0,ky=0,kz=0;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        kx+=x;
        ky+=y;
        kz+=z;
    }
    if(kx==0 && ky==0 && kz==0)
    cout<<"YES";
    else
    cout<<"NO";

}