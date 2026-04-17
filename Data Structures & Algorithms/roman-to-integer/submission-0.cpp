class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
        };
		int current_value = 0;
		int total_value = roman[s[s.length() - 1]];
        for (int i = s.length() - 1; i > 0; i--) {
			current_value = roman[s[i]];
            if (roman[s[i - 1]] < current_value) {
				total_value -= roman[s[i - 1]];
            }
            else {
				total_value += roman[s[i - 1]];
            }
        }
		return total_value;
    }
};
