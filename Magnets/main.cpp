#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    int b=t-1;
    string a;cin>>a;
    int cur=0;
    int g=1;
    while(b--){
        string s; cin>>s;
        if(a[0]==s[0]){cur++;}
        else{g++;}
        a=s;
    }
    cout<<g;
    return 0;
}
