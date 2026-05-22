using pii = pair<int, int>;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Sorting: O(nlogn)
        unordered_map<int, int> m;
        for (int i : nums) m[i]++;

        vector<pii> arr;
        for (auto [k, v] : m) arr.push_back({ v,k });

        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for (int i = 0; i < k; i++) res.push_back(arr[i].second);

        return res;

        // Min-Heap - O(nlogk)
        // unordered_map<int, int> m;
        // for (int i : nums) m[i]++;

        // priority_queue<pi, vector
    }
};
