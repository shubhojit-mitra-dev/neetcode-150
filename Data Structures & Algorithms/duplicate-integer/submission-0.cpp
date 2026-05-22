class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Brute Force - O(n^2)
        // bool res = false;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i+1; j < nums.size(); j++) {
        //         if (nums[i] == nums[j]) {
        //             res = true;
        //             break;
        //         }
        //     }
        // }
        // return res;

        // Sorting - O(nlogn)
        // sort(nums.begin(), nums.end());
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i-1]) return true;
        // }seen.find(num) != seen.end()
        // return false;

        // HashSet - O(n)
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            } else {
                seen.insert(num);
            }
        }
        return false;
    }
};