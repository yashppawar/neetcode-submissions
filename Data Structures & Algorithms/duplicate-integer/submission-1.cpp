class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for (int i; i = 0; i < nums.size() - 1) {
        //     for (int j; j = i + 1; j < nums.size()) {
        //         std::cout << nums[i] << " " << nums[j] << std::endl;
        //         if (nums[i] == nums[j]) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        std::unordered_set<int> map;
        
        for (auto x: nums) {
            if (map.find(x) != map.end())
                return true;
            map.insert(x);
        }
        
        return false;
    }
};
