#include<bits/stdc++.h>
using namespace std ;
int sumofNnumber(int n ){
    if (n == 0) return 0;
    return n + sumofNnumber(n-1);
}
int main(){
    int n ;
    cout << "Enter the number upto which u want to sum : ";
    cin >> n ;
    sumofNnumber(n);
    cout << sumofNnumber(n);
    return 0;
}