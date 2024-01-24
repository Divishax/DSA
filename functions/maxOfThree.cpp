#include <iostream>
using namespace std;

// void printMaximum(int n1, int n2,int n3){
//     if(n1>n2 && n1>n3){
//         cout<<"Max is:"<<n1<<endl;
//     }
//     else if(n1>n2 && n1>n3){
//         cout<<"Max is:"<<n2<<endl;
//     }
//     else{
//         cout<<"Max is:"<<n3<<endl;
//     }
// }

void printMaximum(int n1, int n2,int n3){
    int ans1 = max(n1,n2);
    int finalAns = max(ans1,n3);
    cout<<"Ans is: "<<finalAns<<endl;
}

int main(){
    printMaximum(19,8,7);
}