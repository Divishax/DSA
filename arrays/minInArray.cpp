#include <iostream>
#include <limits.h>
using namespace std;

int findMinInArray(int arr[],int size){

    int minAns = INT_MAX;
    // ans store in variabe

    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main(){
    int arr[] = {10,18,6,9,2};
    int size=5;

    int minimum = findMinInArray(arr,size);
    cout << "Minimum number  is: " << minimum << endl;
}