// String Task

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int count=0;

    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }


        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            count++;
        }
    }
    int n=s.length();
    string s1;
    s1.resize(2*(n-count));

    int i=0,j=0;

    while(i<s.length()){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        i++;
        else{
            s1[j]='.';
            j++;
            s1[j]=s[i];
            i++;
            j++;
        }
    }

    cout<<s1;

    return 0;
}