#include<bits/stdc++.h>
using namespace std;
void palindromeNumber(int n){
    int dup = n ;
    int rev = 0 ;
    while (n > 0){
        int lastdigit = n % 10;
        n = n / 10 ;
        rev = ( rev * 10 ) + lastdigit;
    }
    if ( dup == rev ) cout << "Palindrome number";
    else cout << "Not a Palindrome number";
}
int main (){
    int n;
    cout << "Enter digits :";
    cin >> n;
    palindromeNumber(n);
    if(n==0) cout << 1 ;
    return 0;
}