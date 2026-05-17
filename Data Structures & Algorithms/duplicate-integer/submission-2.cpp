class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> encounteredNums;

        for (auto &x : nums)
        {
            if (encounteredNums.find(x) != encounteredNums.end())
            {
                return true;
            }

            encounteredNums.insert(x);
        }

        return false;
    }
};