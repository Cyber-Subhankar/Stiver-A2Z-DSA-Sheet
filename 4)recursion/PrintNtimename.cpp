#include<bits/stdc++.h>
using namespace std ;
void printName(int i ,int n ){
    if(i>n) return ;
    cout << "Subhankar" << endl;
    printName(i+1,n);
}
int main(){
    int n ;
    cout << "Enter no times u want to print :";
    cin >> n ;
    printName(1,n);

    return 0;
}