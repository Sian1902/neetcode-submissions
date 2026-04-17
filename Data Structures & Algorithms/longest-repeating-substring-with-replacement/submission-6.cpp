class Solution {
public:
int characterReplacement(string s, int k) {
    if (s.empty()) {
        return 0;
    }
    int res = 1; 
    unordered_map<char, int> charMap; 
    int start = 0; 
    int end = 0; 
    charMap[s[0]] = 1;
    int heighst = 1; 
    while (end<s.size()-1) {
        end++; 
        charMap[s[end]]++; 
        if (charMap[s[end]] > heighst) {
            heighst = charMap[s[end]];
        }
        int curr = (end - start+1) - heighst;
        if (curr <= k) {
            if (end - start > res) {
            res = end-start;
            }
        }
        else {
            charMap[s[start]]--;
            start++;
        }
    }
    
    return res+1;
}
};
