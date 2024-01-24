#include <iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }
        else if(mid & 1){ // Odd number
            if(mid-1>=0 && arr[mid] == arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        else{ // even
            if(mid+1<n && arr[mid] == arr[mid+1]){ //left me ho,right me jao
                s=mid+2; //mid+1 already check ho chuka h
            }
            else{
                e=mid; //right part pr ho, ya ans pe ho, e=mid-1 se ans lost ho skta h
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n=13;

    int ansIndex=findOddOccuringElement(arr,n);

    cout<<"Final ans is: "<<arr[ansIndex]<<endl;
}