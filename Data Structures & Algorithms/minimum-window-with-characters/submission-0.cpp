class Solution {
public:
   string minWindow(string s, string t) {
	if (s.size() < t.size()) {
		return "";
	}
	if (s == t) {
		return t; 
	}
	int l = 0;  
	unordered_map<char, int> tCharFreq,window;
	for (char c:t) {
		tCharFreq[c]++;
	}
	int have = 0;
	int need = tCharFreq.size();
	pair<int, int>res = { -1,-1 }; 
	int resLen = INT_MAX;
	for (int r = 0; r < s.length(); r++) {
		char c = s[r];
		window[c]++;
		if (tCharFreq.count(c) && window[c] == tCharFreq[c]) {
			have++;
		}
		while (have == need) {
			if ((r - l + 1) < resLen) {
				resLen = r - l + 1;
				res = { l,r };
			}
			window[s[l]]--;
			if (tCharFreq.count(s[l]) && window[s[l]] < tCharFreq[s[l]]) {
				have--;
			}
			l++;
		}
	}
	return resLen == INT_MAX ? "" : s.substr(res.first, resLen);

}
};