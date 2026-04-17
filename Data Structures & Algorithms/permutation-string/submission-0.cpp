class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    bool result; 
    unordered_map<char, int> s1Map; 
    for (int i = 0; i < s1.size(); i++) {
        s1Map[s1[i]]++;
    }
    int l = 0;
    int e = 0;
    while (e < s2.size()) {
        e = l + s1.size();
        unordered_map<char,int> s2Map;
        result = true;
        for (int i = l; i < e; i++) {

            s2Map[s2[i]]++; 
            if (s2Map[s2[i]] > s1Map[s2[i]]) {
                l++;
                result = false;
                break;
            }

        }
        if (result) {
            return result;
        }
    }
    return result;
}
};
