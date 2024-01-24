#include <iostream>
using namespace std;

void shiftNegativeOneSide(int arr[],int n){
    int j=0;
    // j->memory block-jha p neg no. store kr skte h

    for(int index=0;index<n;index++){
        // index->entire array ko traverse krne k liye
        if(arr[index] < 0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]={23,7,12,-10,-1,40,60};
    int n=7;

    shiftNegativeOneSide(arr,n);

    // printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}