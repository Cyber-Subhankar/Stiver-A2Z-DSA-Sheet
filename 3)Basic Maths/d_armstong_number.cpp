#include<bits/stdc++.h>
using namespace std ;
void armstong_number(int n){
    int sum = 0;
    int dup = n;
    while (n > 0){
        int lastdigit = n % 10 ;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n / 10;
    }
    if ( dup == sum ) cout << "Armstong Number ";
    else cout << "Not a armstong number ";
}
int main (){
    int n;
    cout << "Enter digits :";
    cin >> n;
    armstong_number(n);
    return 0;
}