#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,d=0,t,i,l;
    char s[100001];
    while(cin >> t){
        for(int i=0;i<t;i++){
            cin >> s[i];
            if (s[i] == 'A')
                a++;
            else if(s[i] == 'D')
                d++;
        }
        if(a>d)
            cout<<"Anton"<<endl;
        else if(d>a)
            cout<<"Danik"<<endl;
        else if(a == d)
            cout<<"Friendship"<<endl;
    }
}