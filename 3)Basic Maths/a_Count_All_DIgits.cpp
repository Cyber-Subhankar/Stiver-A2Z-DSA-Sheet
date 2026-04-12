#include<bits/stdc++.h>
using namespace std;
int countdigits( int n ){
    int count = 0;
    while(n > 0){
        count = count + 1;
        n = n / 10;
    }
    return count ;
}

int main (){
    int n;
    cout << "Enter digits :";
    cin >> n;
    countdigits(n);
    if(n==0) cout << 1 ;
    return 0;
}