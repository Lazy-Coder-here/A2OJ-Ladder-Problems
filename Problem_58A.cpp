// Chat room

#include<iostream>
using namespace std;

bool Chat(string &s){
    string s1="hello";
    int i=0,j=0;
    
    while(i<s.length() && j<s1.length()){
        if(s[i]==s1[j]){
            i++;
            j++;
        }
        else
        i++;
    }
    return j<s1.length()?0:1;
}
int main(){
    string s;
    cin>>s;
    if(s.length()<5)
    cout<<"NO";
    else{
        if(Chat(s)==1)
        cout<<"YES";
        else
        cout<<"NO";
    }

    return 0;
}