#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int max_len = 0;
        vector<int> last_seen(256, -1);
        for (int i = 0; i < s.length(); i++) {
            if (last_seen[s[i]] >= start) {
                start = last_seen[s[i]] + 1;
            }
            last_seen[s[i]] = i;
            max_len = max(max_len, i - start + 1);
        }
        return max_len;
    }
};

int main() {
    Solution solution;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int result = solution.lengthOfLongestSubstring(s);
    cout << "Length of longest substring without repeating characters: " << result << endl;
    return 0;
}
