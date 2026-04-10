#include<bits/stdc++.h>
using namespace std ;
int sumofNnumber(int i , int sum){
    if (i < 1) {
        cout << sum ;
        return 0;
    }
    return sumofNnumber(i-1,sum+i);
}
int main(){
    int n ;
    cout <<"Upto how much number u want to calculate : ";
    cin >> n ;
    sumofNnumber(n,0);
    return 0;
}