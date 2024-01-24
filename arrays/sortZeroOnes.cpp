#include <iostream>
using namespace std;

void sortZeroOnes(int arr[], int n){
    int zeroCount=0;
    int oneCount=0;

    // count 0s and 1s
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }

    // place 0s first
    // int i;
    // for(i=0;i<zeroCount;i++){
    //     arr[i]=0;
    // }
    // for(int j=i;j<n;j++){
    //     arr[j]=1;
    // }

    // easy way
    int index=0;
    while(zeroCount--){
        arr[index]=0;
        index++;
    }
    while(oneCount--){
        arr[index]=1;
        index++;
    }
}

int main(){
    int arr[] = {0,1,0,1,1,0,0,0,0};
    int n=9;

    sortZeroOnes(arr,n);

    // printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}