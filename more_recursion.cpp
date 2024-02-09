#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    reverse(i-1,n);
}

//backtracking
void print(int i, int n){
    if(i<1) return;
    print(i-1,n);
     cout<<i<<endl;
}

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    reverse(n,n);
    print(n,n);
    return 0;


}