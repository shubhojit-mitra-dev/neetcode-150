class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute Force = O(n^2)
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[i] + nums[j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};

        // Sorting & Two Pointers - O(nlogn)
        // sort(nums.begin(), nums.end());
        // int l = 0;
        // int r = nums.size() - 1;
        // while (l < r) {
        //     int sum = nums[l] + nums[r];
        //     if (sum < target) l++;
        //     if (sum > target) r--;
        //     if (sum == target) return {l, r};
        // }
        // return {};

        // HashMap = O(n)
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (m.find(x) != m.end()) {
                cout << m[x];
                return {m[x], i};
            }
            m.insert({nums[i], i});
        }
        return {};
    }
};
