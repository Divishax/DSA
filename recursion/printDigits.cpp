#include <iostream>
using namespace std;

void printDigits(int num){
    // base case
    if(num == 0){
        return;
    }
    //processing
    int digit = num%10;
    //update num
    num = num/10;
    //recursive call
    printDigits(num);
    //processing
    cout << digit << endl;
}

int main(){
    int num = 4215;
    printDigits(num);
}