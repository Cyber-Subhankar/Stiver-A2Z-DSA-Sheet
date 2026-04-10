#include<bits/stdc++.h>
using namespace std ;
void fact(int i,int factorial){
    if (i<1) {
        cout << factorial ;
        return ;
    }
    fact(i-1,factorial*i);

}
int main (){
    int n ;
    cout << "Enter number :";
    cin >> n ;
    fact(n,1);
    return 0;
}