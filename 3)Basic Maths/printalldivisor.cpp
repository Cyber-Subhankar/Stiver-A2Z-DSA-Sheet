// Brute force approch 

#include<bits/stdc++.h>
using namespace std ;
void Print_all_divisor(int n ){
    for (int i = 1 ; i < n ; i ++){
        if (n % i == 0) cout << i << " " ;
    }
}

int main (){
    int n;
    cout << "Enter digits :";
    cin >> n;
    Print_all_divisor(n);
    return 0;
}