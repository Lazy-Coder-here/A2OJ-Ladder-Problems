// Dubstep

#include<bits/stdc++.h>
using namespace std;

/*string Original(string &x){
    int i=3;
    int n=x.length();
    while(i<n-3){
        i=x.find("WUB");
        if(i!=n){
            x.replace(i,3," ");
            i+=3;
        }
        i++;
    }
    if(x[0]==' ')
        x.erase(x[0]);

    for(int j=0;j<n;j++){
        if(x[j]==' ' && x[j+1]==' ')
            x.erase(x[j]);
    }
    return x;
}*/
int main(){
    string x;
    cin>>x;

    int i=3;
    int n=x.length();
    while(i<n-3){
        i=x.find("WUB");
        if(i!=n){
            x.replace(i,3," ");
            i+=3;
        }
        i++;
    }
    if(x[0]==' ')
        x.erase(x[0]);

    for(int j=0;j<n;j++){
        if(x[j]==' ' && x[j+1]==' ')
            x.erase(x[j]);
    }

    cout<<x;
    

    return 0;
}