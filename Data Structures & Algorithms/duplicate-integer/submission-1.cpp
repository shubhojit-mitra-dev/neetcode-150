class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        for (const auto& element : nums) {
            if (hashset.contains(element)) return true;
            else hashset.insert(element);
        }
        return false;
    }
};