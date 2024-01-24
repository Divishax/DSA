#include <iostream>
using namespace std;

// return true if N is prime
// return false if N is not a prime no.

bool checkPrime(int n){

    for(int i=2;i<=n-1;i++){
        if(n%i == 0){
            // remainder is 0, not a prime no
            return false;
        }
    }
    // N is prime
    return true;
}

int main(){
    bool prime = checkPrime(2);

    if(prime){
        cout<<"it is prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
}