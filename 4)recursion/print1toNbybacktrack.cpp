#include<bits/stdc++.h>
using namespace std ;
void print1toN(int i, int n){
    if(i<1) return ;
    print1toN(i-1,n);
    cout << i << endl;
}
int main (){
    int n ;
    cout << "Enter how many times u want to print :";
    cin >> n ;
    print1toN(n,n);
    return 0;
}