#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0,arr[101],c1=0;
    while(cin >> t){
        for(int i=0;i<t;i++){
            cin >> arr[i];
            if(arr[i] == 0)
                c++;
            else if(arr[i] == 1)
                c1++;
        }
        if(c1>=1)
            cout<<"HARD"<<endl;
        else
            cout<<"EASY"<<endl;
        c1=0;c=0;
    }
}