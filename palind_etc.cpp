#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int revnum = 0;
//     int dup = n;
//     while(n>0){
//         int ld = n%10;
//         revnum = (revnum*10)+ ld;
//         n= n/10;
//     }
//     if(dup == revnum) cout<<"its is a palindrome";
//     else cout<<"it is not a palindrome";
//     return 0;
// }

// armstrong number


// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     int dup = n;
//     while(n>0){
//         int ld = n%10;
//         sum = sum+(ld*ld*ld);
//         n= n/10;
//     }
//     if(dup == sum) cout<<"its is a armstrong number";
//     else cout<<"it is not a armstrong number";
//     return 0;
// }


// print all divisors

// int main(){
//     int a;
//     cout<<"enter a no. ";
//     cin>>a;
//     for(int i= 1; i<=a; i++){
//         if(a%i==0) cout<<i<<" ";

//     }
//     return 0;
// }

// prime check
// int main(){
//     int p;
//     int cnt =0;
//     cin>>p;
//     for(int i =1;i*i<=p;i++){
//         if(p%i==0) {
//             cnt++;
//             if((p/i) != i) cnt++;
//         }    }
//         if(cnt==2) cout<<"it is a prime number";
//         else cout<<"not a prime number";

// }


//gcd od two number

int gcd(int a , int b){
    while(a>0 && b>0){
        if(a>b) a= a%b;
        else b= b%a;
    }
    if(a==0) return b;
    else return a;
}

int main(){
    int a;
    int b;
    cin>>a>>b;
    int GCD = gcd(a,b);
    cout<<"Gcd is "<< GCD;
    return 0;
}