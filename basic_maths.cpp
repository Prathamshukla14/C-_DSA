#include<bits/stdc++.h>
using namespace std;
//digitcount
int digitcount(int n){
    int cnt = 0;
    while(n>0){
        cnt = cnt+1 ;
        n= n/10;
    }
    return cnt;
}


int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
   int dc = digitcount(n);
   cout<<dc;

    return 0;
}

//reverse number

int main(){
    int a;
    cin>>a;
    int revnum =0;
    while(a>0){
        int ld = a%10;
        revnum = (revnum*10)+ld;
        a= a/10;
        }
    cout<<revnum;
    return 0;
    
}