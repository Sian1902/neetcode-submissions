class Solution {
public:
int largestRectangleArea(vector<int>& heights) {
	pair<int, int> top;
	vector<int> stack;
	int maxArea = 0;
	for (int i = 0; i < heights.size(); i++) {
		while (!stack.empty() && heights[stack.back()] > heights[i]) {
			top = { stack.back(), heights[stack.back()] };
			stack.pop_back();
			int area = top.second * (stack.empty() ? i : i - stack.back() - 1);
			maxArea = max(maxArea, area);
		}
		stack.push_back(i);
	}
	while (!stack.empty()) {
		top = { stack.back(), heights[stack.back()] };
		stack.pop_back();
		int area = top.second * (stack.empty() ? heights.size() : heights.size() - stack.back() - 1);
		maxArea = max(maxArea, area);
	}
	return maxArea;
}
};
