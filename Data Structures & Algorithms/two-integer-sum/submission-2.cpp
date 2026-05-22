class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2) {
            return {};
        }
        unordered_map<int, int> numStore;
        numStore.reserve(nums.size());
        for (size_t i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = numStore.find(complement);
            if (it != numStore.end()) {
                return { it->second, static_cast<int>(i) };
            }
            numStore.emplace(nums[i], static_cast<int>(i));
        }
        return {};
    }
};
