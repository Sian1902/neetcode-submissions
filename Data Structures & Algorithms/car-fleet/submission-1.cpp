class Solution {
public:
int carFleet(int target, vector<int>& position, vector<int>& speed) {
	vector<pair<int,int>> v;
	for (int i = 0; i < position.size(); i++) {
		v.push_back({ position[i], speed[i] });
	}
	sort(v.begin(), v.end());
	vector<double> time;
	for (int i = 0; i < v.size(); i++) {
		time.push_back((double)(target - v[i].first) / v[i].second);
	}
	int count = 0;
	for (int i = time.size() - 1; i >= 0; i--) {
		if (i == time.size() - 1) {
			count++;
		}
		else {
			if (time[i] > time[i + 1]) {
				count++;
			}
			else {
				time[i] = time[i + 1];
			}
		}
	}
	return count;
}
};
