#include <iostream>
using namespace std;

int countSetBit(int n){
    int count=0;
    while(n>=0){
        int bit = n%2;
        if(bit==1){
            count++;
        }
        n=n/2;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int ans = countSetBit(n);
    cout << ans << endl;
}