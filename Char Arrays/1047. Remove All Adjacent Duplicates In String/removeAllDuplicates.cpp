#include<vector>
#include <string>
using namespace std;

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
class Solution {
public:
    string removeDuplicates(string s) {
        string ans=""; //empty string
        int index=0;
        while(index<s.length()){
            if(ans.length()>0 && ans[ans.length()-1] == s[index]){ //ans.length()-1->rigthmost character, s.index->string's current character
                ans.pop_back(); //same-pop
            }
            else{
                //different-push
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};