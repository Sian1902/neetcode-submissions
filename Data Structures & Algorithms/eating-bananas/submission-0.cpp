class Solution {
public:
int minEatingSpeed(vector<int>& piles, int h) {
    int k = 1000000001;
    int l = 1;
    int r = *max_element(piles.begin(), piles.end());
	if (piles.size() == h) return r;
    while (l < r) {
		int m = l + (r - l) / 2;
		int hours = 0;
        for (int i = 0; i < piles.size(); i++) {
			hours += (piles[i] + m - 1) / m;
        }
        if (hours > h) {
			l = m + 1;
		}
        else {
			k = min(k, m);
			r = m;
        }
    }
    return k;
}
};
