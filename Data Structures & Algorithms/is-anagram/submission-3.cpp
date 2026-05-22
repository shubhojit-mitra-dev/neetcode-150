class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        vector<int> charCounts(26);
        for (size_t i = 0; i < s.size(); ++i) {
            charCounts[s[i] - 'a']++;
            charCounts[t[i] - 'a']--;
        }
        for (const int& count : charCounts) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
};
