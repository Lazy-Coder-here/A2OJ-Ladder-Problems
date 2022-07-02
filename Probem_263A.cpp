// Beautiful Matrix

#include<iostream>
using namespace std;
int main(){
    int m[5][5];

    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>m[i][j];

    int x=0,y=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]==1){
                x=i;
                y=j;
                break;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);

    return 0;
}