#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size());
        transform(nums.begin(), nums.end(), squares.begin(), [](int num) { return num * num; });
        sort(squares.begin(), squares.end());
        return squares;   
    }
};