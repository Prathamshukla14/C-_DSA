#include<bits/stdc++.h>
using namespace std;
//parameterised
// void summ(int i,int sum){
//     if (i<1){
//     cout<<sum<<endl;
//     return;
//     } 
//     summ(i-1,sum+i);
    
// }


// int main(){
//     int n;
//     cin>>n;
//     summ(n,0);
//     return 0;
// }

//functional
int sumofn(int n){
    if (n==0) return 0;
    return n+sumofn(n-1);
}

int fact(int n ){
    if (n==0) return 1;
    return n* fact(n-1);
}

int main(){
    int s;
    int sum;
    cin>>s;
    sum = sumofn(s);
    cout<<sum<<endl;
    cout<<fact(s);
    return 0;
    
}