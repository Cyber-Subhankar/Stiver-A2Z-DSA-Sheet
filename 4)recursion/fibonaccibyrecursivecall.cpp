#include<bits/stdc++.h>
using namespace std;
int fibonaccinum(int n){
    if (n <= 1) return n ;
    return fibonaccinum(n-1) + fibonaccinum(n-2); 
}
int main(){
    int n ;
    cout << "Enter the nth term : ";
    cin >> n ;
    fibonaccinum(n);
    cout << fibonaccinum(n);
    return 0;
}