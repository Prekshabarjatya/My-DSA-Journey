#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
    int max_len = 0; 
    vector<char> temp_string;
    
    for(int i = 0; i < s.length(); i++) 
    {
        auto it = find(temp_string.begin(), temp_string.end(), s[i]);
        if(it != temp_string.end()) 
        {
            temp_string.erase(temp_string.begin(), it + 1);
        }
        temp_string.push_back(s[i]);
        max_len = max(max_len, (int)temp_string.size());
    }
    return max_len;
}
int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
