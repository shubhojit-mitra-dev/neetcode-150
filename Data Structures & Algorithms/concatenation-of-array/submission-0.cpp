class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < 2; ++i) {
            for (const int& num : nums) {
                ans.emplace_back(num);
            }
        }
        return ans;
    }
};