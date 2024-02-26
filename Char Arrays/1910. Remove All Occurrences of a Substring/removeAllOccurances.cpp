// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include<vector>
#include <string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part) != string::npos){ //npos=no position
            // if inside loop,it means part exists in string
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};