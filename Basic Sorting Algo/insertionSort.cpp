#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout<<endl;
}

void insertionSort(vector<int> &v){
    int n = v.size();
    // i=0 ignore case
    for(int i=1;i<n;i++){
        int key=v[i];
        int j=i-1;

        //Move elements of arr[0->i-1] that are greater than
        //key to one position ahead of their current position
        while(j>=0 && v[i]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key; //insertion
    }
}

int main(){
    vector<int> v = {5,4,3,2,1};
    insertionSort(v);
    print(v);
    return 0;
}