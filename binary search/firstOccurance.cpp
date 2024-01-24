#include <iostream>
using namespace std;

// Find First Occurance in a Sorted Array

int findFirstOccurance(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    //int mid=(s+e)/2;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        // found
        if(arr[mid]==target){
            // ans store
            ans = mid;
            // go to left
            e = mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


// Find Last Occurance in a Sorted Array

int findLastOccurance(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    //int mid=(s+e)/2;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        // found
        if(arr[mid]==target){
            // ans store
            ans = mid;
            // go to left
            s = mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


// Find Total Occurance in a Sorted Array

int findTotalOccurance(int arr[],int n,int target){
    int firstOcc = findFirstOccurance(arr,n,target);
    int lastOcc = findLastOccurance(arr,n,target);
    int total = lastOcc - firstOcc + 1;
    return total;
}

int main(){

    int arr[]={30,30,30,30,30,30,70,80,90};
    int target=30;
    int n=9;
    int ansIndex= findLastOccurance(arr,n,target);

    if(ansIndex == -1){
        cout << "Element not found " << endl;
    }
    else{
        cout << "Element found at Index: " <<  ansIndex << endl;
    }
    return 0;
}

