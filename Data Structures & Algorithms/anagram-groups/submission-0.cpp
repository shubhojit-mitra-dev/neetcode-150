class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Sorting - O(m*nlogn)
        // unordered_map<string, vector<string>> m;
        // for (string s : strs) {
        //     string k = s;
        //     sort(k.begin(), k.end());
        //     m[k].push_back(s);
        // }
        // vector<vector<string>> res;
        // for (auto [k,v] : m) {
        //     res.push_back(v);
        // }
        // return res;

        // Hash Table - O(m*n)
        unordered_map<string, vector<string>> m;
        for (string s : strs) {
            vector<int> a(26, 0);
            for (char c : s) {
                a[c - 'a']++;
            }
            string k;
            for (int i : a) {
                k += to_string(i) + '#';
            }
            m[k].push_back(s);
        }
        vector<vector<string>> res;
        for (const auto& e : m) {
            res.push_back(e.second);
        }
        return res;
    }
};
