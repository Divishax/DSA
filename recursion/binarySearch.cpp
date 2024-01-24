#include <iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int target){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return binarySearch(arr,start,mid-1,target);
    }
    if(arr[mid] < target){
        return binarySearch(arr,mid+1,end,target);
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=8;
    int start=0;
    int end=size-1;
    int target=70;

    int foundIndex = binarySearch(arr,start,end,target);

    if(foundIndex){
        cout << "Target found: " << foundIndex << endl;
    }
    else{
        cout << "Target not found: "<<endl;
    }

}