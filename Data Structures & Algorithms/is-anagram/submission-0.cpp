class Solution {
public:
    bool isAnagram(string s, string t) {
        // Brute Force - O(nlogn)
        // if (s.size() != t.size()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;

        // HashMap - O(n)
        unordered_map<char, int> f;
        for (char c : s) f[c]++;
        for (char c : t) f[c]--;
        for (auto [k,v] : f) {
            if (v != 0) return false;
        }
        return true;
    }
};
