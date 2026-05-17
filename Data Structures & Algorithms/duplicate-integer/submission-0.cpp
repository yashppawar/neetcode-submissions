class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for (int i; i = 0; i < nums.size()) {
        //     for (int j; j = 0; j < nums.size()) {
        //         std::cout << nums[i] << " " << nums[j] << std::endl;
        //         if (nums[i] == nums[j]) {
        //             return true;
        //         }
        //     }
        // }

        // return false;
        std::unordered_map<int, int> map;
        for (auto x: nums) {
            if (map.find(x) != map.end())
                return true;
            map[x] = 0;
        }
        return false;
    }
};
