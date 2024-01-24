#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid = (s + e) / 2;
    while(s<=e){
        // found
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        // Mid Update
        mid = (s + e) / 2;
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=9;
    int target=90;

    int ansIndex = binarySearch(arr,n,target);

    if(ansIndex == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found is: "<< ansIndex << endl;
    }
    return 0;
}