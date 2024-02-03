#include<bits/stdc++.h>
using namespace std;

// void printname(string name){
//     cout<< "hey "<< name << endl;
// }

// int main(){
//     string name;
//     cin>> name;
//     printname(name);
    
//     string name2;
//     cin >> name2;
//     printname(name2);
//     return 0;

// }

int sum(int num1,int num2){
    int num3= num1+num2;
    return num3;
}

int main(){
    int num1, num2;
    cin>> num1>> num2;
    int res= sum(num1,num2);
    cout<< res;
    return 0;

}
