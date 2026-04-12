#include<bits/stdc++.h>
using namespace std;
void primenumber_check(int n ){
    int count = 0;
    for(int i = 1; i *i <= n ; i++){
        if(n%i==0) {
            cout << i << " ";
            if (n/i!=i) cout << (n/i) << " ";
        }
    }
}
int main (){
    int n ;
    cout << "Enter Number :";
    cin >> n ;
    primenumber_check(n);
    return 0;
}