#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        // Use a min-heap (priority queue) to keep track of the minimum element and its index
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        // Initialize the heap with values and indices
        for (int i = 0; i < nums.size(); ++i) {
            pq.push({nums[i], i});
        }
        
        // Perform k operations
        while (k--) {
            auto [val, idx] = pq.top(); // Get the smallest element
            pq.pop();                   // Remove it from the heap
            
            nums[idx] = val * multiplier; // Update the array value
            pq.push({nums[idx], idx});    // Push the updated value back to the heap
        }
        
        return nums;
    }
};

int main() {
    // Input values
    vector<int> nums = {2, 1, 3, 5, 6};
    int k = 5;
    int multiplier = 2;

    // Solution instance
    Solution solution;
    vector<int> result = solution.getFinalState(nums, k, multiplier);

    // Output the result
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
