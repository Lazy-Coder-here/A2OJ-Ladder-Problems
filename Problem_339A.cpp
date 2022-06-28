// Helpful Maths

#include<bits/stdc++.h>
using namespace std;

string XeniaCount(string &s){
    int n=s.length();
    string s1="";
    for(int i=0;i<n;i=i+2){
        s1+=s[i];
    }
    sort(s1.begin(),s1.end());
    int i=0,k=0;
    while(i<n){
        s[i]=s1[k];
        i++;
        k++;
        s[i]='+';
        i++;
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    if(s.length()==1)
    cout<<s;
    else
    cout<<XeniaCount(s);

    return 0;
}