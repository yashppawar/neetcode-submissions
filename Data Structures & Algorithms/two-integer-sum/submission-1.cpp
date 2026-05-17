class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numCompToIdx;

        for (int i = 0; i < nums.size(); i++)
        {
            if (numCompToIdx.find(nums[i]) != numCompToIdx.end())
            {
                return {numCompToIdx[nums[i]], i};
            }

            numCompToIdx[target - nums[i]] = i;
        }

        return {};
    }
};
