// Dubstep

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
	ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    bool flag=1;

    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(flag==0)
                cout<<" ";
            continue;
        }
        else{
            flag=0;
            cout<<s[i];
        }
    }
    

    return 0;
}
