#include<bits/stdc++.h>
using namespace std ;
void reversearray(int l, int r, int arr[], int n ){
    if(l>=r) return ;
    swap(arr[l],arr[r]);
    reversearray(l+1,r-1,arr,n);
}
int main(){
    int n ;
    cout << "Enter no of elements in an array : ";
    cin >> n ;
    int arr[n];
    for(int i =0 ;i < n ;i++){
        cin >> arr[i];
    }
    reversearray(0,n-1,arr,n);
    cout << "Reverse array : ";
    for(int i =0 ; i < n; i++){
        cout << arr[i] << " ";
    }
}