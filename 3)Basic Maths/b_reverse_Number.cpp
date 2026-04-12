#include<bits/stdc++.h>
using namespace std;
void reversedigit(int n){
    int rev = 0;
    while(n > 0){
        int lastdigit = n % 10;
        n = n / 10 ;
        rev = ( rev * 10 ) + lastdigit ;
    }
    cout << rev ;
}
int main (){
    int n;
    cout << "Enter digits :";
    cin >> n;
    reversedigit(n);
    return 0;
}