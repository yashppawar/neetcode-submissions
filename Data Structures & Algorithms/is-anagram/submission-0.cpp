class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> sCount, tCount;

        for (int i = 0; i < s.size(); i++) {
            sCount[s[i]]++;
            tCount[t[i]]++;
        } 

        for (auto pair: sCount) {
            if (tCount[pair.first] != pair.second)
                return false;
        }

        return true;
    }
};
