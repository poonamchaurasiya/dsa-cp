#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> count(128, 0);
        
        int left = 0;   
        int right = 0;  
        int maxLen = 0;

        while (right < s.length()) {
            char r = s[right];
            count[r]++;

        
            while (count[r] > 1) {
                char l = s[left];
                count[l]--;
                left++;
            }

            
            maxLen = max(maxLen, right - left + 1);

            
            right++;
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    string input = "abcabcbb";
    cout << "Longest substring length: " << sol.lengthOfLongestSubstring(input) << endl;
    return 0;
}
