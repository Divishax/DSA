#include <iostream>
using namespace std;

void transpose(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void printArray(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
    }
}

int main(){
    int arr[][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
    };

    int row=3;
    int col=4;
    printArray(arr,row,col);
    transpose(arr,row,col);
}