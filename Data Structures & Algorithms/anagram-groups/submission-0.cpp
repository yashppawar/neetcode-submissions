class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, int> str_to_idx;

        for (auto str: strs) {
            string copy = str;

            sort(copy.begin(), copy.end());
            // cout << copy << " " << str << endl;

            if (str_to_idx.find(copy) == str_to_idx.end()) {
                vector<string> row;
                str_to_idx[copy] = result.size();
                row.push_back(str);
                result.push_back(row);
            } else {
                result[str_to_idx.at(copy)].push_back(str);
            }
        }

        return result;
    }
};
