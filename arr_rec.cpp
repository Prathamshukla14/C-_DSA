#include<bits/stdc++.h>
using namespace std;

// void reverse(int l, int r, vector<int> &arr) {
//     if (l >= r) return;
//     swap(arr[l], arr[r]);
//     reverse(l + 1, r - 1, arr);
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     reverse(0, n - 1, arr);

//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//using one variable
// void rev(int i, int arr[], int n){
//     if(i>n/2) return;
//     swap(arr[i], arr[n-i-1]);
//     rev(i+1,arr,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//     cin>>arr[i];
//     }
//     rev(0,arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//palindrome
bool f(int i, string &s){
    if(i>=(s.size())/2) return true;
    if(s[i] != s[s.size() - i-1]) return false;
    return f(i+1,s);
}  

int main(){
    string s;
    cin>>s;
    cout<<f(0,s);
    return 0;
}