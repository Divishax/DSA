#include <iostream>
using namespace std;

int factOfNumber(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;
    int ans = factOfNumber(n);
    cout<< ans << endl;
}