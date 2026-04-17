#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> heap;
        vector<int> output;
        
        for (int i = 0; i < nums.size(); i++) {
            // Push the current number with its index
            heap.push({nums[i], i});

            // Start recording output only when we reach size k
            if (i >= k - 1) {
                // Remove elements outside the current window
                while (heap.top().second <= i - k) {
                    heap.pop();
                }
                output.push_back(heap.top().first);
            }
        }

        return output;
    }
};
