#include <iostream>
using namespace std;

int uniqueElement(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {2,10,11,13,10,2,15,13,15};
    int n=9;

    int finalAns = uniqueElement(arr,n);
    cout << "Final answer is: " << finalAns << endl;
}