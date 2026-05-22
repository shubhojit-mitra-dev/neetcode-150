class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() <= 1) return false;
        unordered_set<int> seenNumbers;
        seenNumbers.reserve(nums.size());
        for (const int& num : nums) {
            if (seenNumbers.contains(num)) return true;
            seenNumbers.insert(num);
        }
        return false;
    }
};