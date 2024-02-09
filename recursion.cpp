#include<bits/stdc++.h>
using namespace std;


int cnt=0;

void returnn(){
    if(cnt==4) return;
    cout<<cnt<< endl;
    cnt++;
    returnn();
}

void name(int i, int n){
    if (i>n) return;
    cout<<"pratham"<<endl;
    name(i+1,n);

}

int main(){
    returnn();
    int n;
    cin>>n;
    name(1,n);
    return 0;

}







