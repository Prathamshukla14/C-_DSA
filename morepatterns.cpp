#include<bits/stdc++.h>
using namespace std;    

void pattern1(int n){
    int num =1;
    for(int i =1; i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    } 

}

void pattern2(int n){
    for(int i=0; i<=n;i++){
        for(char ch='A'; ch<='A'+i;ch++){
            cout<<ch<< " ";
        }
        cout<<endl;
     }
}

void pattern3(int n){
    for(int i=0; i<=n;i++){
        for(char ch ='A'; ch<='A' +(n-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}

void pattern4(int n){
    for(int i =0;i<n;i++){
        char ch= 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0;i<n;i++){
        //space
            for(int j=0;j<n-i-1 ;j++){
                cout<<" ";
            }

        //charcters
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1;j++){
            cout<<ch<<" ";
            if(j<=breakpoint) ch++;
            else ch--;
        }
        //space
            for(int j=0;j<n-i-1 ;j++){
                cout<<" ";
            }
        cout<<endl;    
    }
    
}

void pattern6(int n){
    for(int i=0; i<n;i++){
        for(char ch='E' -i; ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    int inis = 0;
    for(int i =0; i<n;i++){
        //stars
        for(int j=1; j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<inis;j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=n-i;j++){
            cout<<"*";
        }
        inis += 2;
        cout<<endl;
    }
    int inisi = 2*n-2;
    for(int i =0; i<=n;i++){
        //stars
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<inisi;j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        inisi -= 2;
        cout<<endl;

} }

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cout<<"enter no. of rows ";
    cin>>n;
    pattern7(n);
    }
    return 0;
}