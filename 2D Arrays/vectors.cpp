#include <iostream>
#include <vector>
using namespace std;

int main(){
    // // int arr[5];
    // vector<int> v;
    //vector<int> v(5);
    //vector<int> v(5,-1);

    // // insert
    // v.push_back(4);
    // v.push_back(8);
    // v.push_back(12);
    // v.push_back(11);
    // v.push_back(4);

    // cout << v.size() << endl;

    // cout << v.empty() << endl;

    // cout<<"Size of vector: "<< v.size();

    // cout<<endl<<"Printing the vector"<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout << v[i] << " ";
    // }cout << endl;

    // 2D Array
    vector< vector<int> > arr(5, vector<int>(10,0));
    
    //row size -> arr.size()
    //col size -> arr[i].size()
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    // Jagged Array

    vector<vector<int>> brr;

    vector<int> vec1(10,0);
    vector<int> vec2(5,0);
    vector<int> vec3(7,0);
    vector<int> vec4(8,0);
    vector<int> vec5(9,0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout << brr[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}