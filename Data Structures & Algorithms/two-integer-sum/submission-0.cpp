class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        int diff;

        for (int i = 0; i < nums.size(); i++) {
            diff = target - nums[i];

            if (map.find(diff) == map.end()) {
                map[nums[i]] = i;
            } else {
                return std::vector<int>({map.at(diff), i});
            }
        }
    }
};
