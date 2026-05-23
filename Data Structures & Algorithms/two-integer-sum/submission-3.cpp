class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute Force: O(n^2)
        // size_t n = nums.size();
        // for (size_t i = 0; i < n; ++i) {
        //     for (size_t j = i + 1; j < n; ++j) {
        //         if ((nums[i] + nums[j]) == target) {
        //             return {static_cast<int>(i), static_cast<int>(j)};
        //         }
        //     }
        // }
        // return {};
        // Sorting: O(nlogn)
        // vector<pair<int, int>> A;
        // for (int i = 0; i < nums.size(); i++) {
        //     A.push_back({nums[i], i});
        // }

        // sort(A.begin(), A.end());

        // int i = 0, j = nums.size() - 1;
        // while (i < j) {
        //     int cur = A[i].first + A[j].first;
        //     if (cur == target) {
        //         return {min(A[i].second, A[j].second),
        //                 max(A[i].second, A[j].second)};
        //     } else if (cur < target) {
        //         i++;
        //     } else {
        //         j--;
        //     }
        // }
        // return {};
        size_t n = nums.size();
        unordered_map<int, int> prevMap;
        prevMap.reserve(n);
        for (size_t i = 0; i < n; ++i) {
            int comp = target - nums[i];
            if (auto it = prevMap.find(comp); it != prevMap.end()) {
                return {it->second, static_cast<int>(i)};
            }
            prevMap[nums[i]] = static_cast<int>(i);
        }
        return {};
    }
};
