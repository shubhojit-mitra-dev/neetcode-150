class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> commonChars;
        commonChars.reserve(s.size());
        for (const auto& character: s) commonChars[character]++;
        for (const auto& character: t) commonChars[character]--;
        for (const auto& [key, value] : commonChars) {
            cout << key << " " << value << endl;
        }
        for (const auto& [key, value] : commonChars) {
            if (value != 0) return false;
        }
        return true;
    }
};
