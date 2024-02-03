#include<bits/stdc++.h>
using namespace std;

//pass by value

void print(int n){
    cout<< n << endl;
    n=n+1;
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    print(n);
    cout<<n;
    return 0;

}




//pass by refrence

void print1(int &n){
    cout<< n << endl;
    n=n+1;
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    print1(n);
    cout<<n;
    return 0;

}