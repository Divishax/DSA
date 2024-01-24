#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col){
    for(int i=0;i<row; i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void colWisePrint(int arr[][4], int row, int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    // create a 2D array
    // int arr[3][3];

    // initialize
    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    int brr[] = {1,2,3,4};

    int crr[][4] = {     // no error
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // int drr[][] = {      // error
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // int drr[][] = {      // error
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // 2D array initialize krnr ja rhe ho toh at least col ka size toh btana he pdega

    // printing the 2D Array
    // int row=3;
    // int col=4;
    // printArray(arr,row,col);
    // colWisePrint(arr,row,col);

    // Input
    int arr[3][3];
    int row=3;
    int col=3;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the input for row index: "<< i << "coloumn index: " << j << endl;
            cin >> arr[i][j];
        }
    }
}