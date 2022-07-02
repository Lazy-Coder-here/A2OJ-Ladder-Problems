// Anton and Letters

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
	ios_base::sync_with_stdio(false); // these 2 code speeds up the execution time

    string m;
    unordered_set<char>s;
    getline(cin,m);
    for(auto &x:m)
        if(x>='a' && x<='z')
            s.insert(x);

    cout<<s.size();

    return 0;
}