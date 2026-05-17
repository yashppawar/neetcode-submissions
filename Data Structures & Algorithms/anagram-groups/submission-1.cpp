class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> outputMap;
        vector<vector<string>> op;

        for (auto &str : strs)
        {
            vector<int> count(26, 0);

            for (auto &c : str)
            {
                count[c - 'a']++;
            }

            outputMap[count].push_back(str);
        }

        for (auto &pair_ : outputMap)
        {
            op.push_back(pair_.second);
        }

        return op;
    }
};
