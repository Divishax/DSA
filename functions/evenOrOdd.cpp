#include <iostream>
using namespace std;

// void checkEvenOdd(int num){
//     if(num % 2 == 0){
//         cout<<"Even number"<<endl;
//     }
//     else{
//         cout<<"Odd number"<<endl;
//     }
// }

// using bitwise & operator
void checkEvenOdd(int num){
    if((num & 1) == 0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    }
}

int main(){
    checkEvenOdd(7);
}