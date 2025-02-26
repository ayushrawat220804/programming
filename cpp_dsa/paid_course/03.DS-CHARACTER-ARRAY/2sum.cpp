#include <vector>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Brute force approach
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // Return the indices if a pair is found
            }
        }
    }
    return {}; // Return an empty vector if no solution found (though the problem guarantees one solution)
}

int main() {
    vector<int> nums;  // Example input
    int target;
    int n;

    cout << "enter arrays size : " ;
    cin >> n;

    cin.ignore();
    cout << "enter arrays elements : ";
    for(int i = 0; i < n; i++){
        cin >> nums[n];
    }

    cout << "enter target : " ;
    cin >> target;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

