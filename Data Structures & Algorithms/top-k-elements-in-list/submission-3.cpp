#include <ranges>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        int N = nums.size();

        for (auto n : nums)
            counts[n]++; // defaults to zero

        vector<vector<int>> buckets(N + 1); // Max frequency is N, can lead to segfault

        for (auto nc_pair : counts)
            buckets[nc_pair.second].push_back(nc_pair.first);

        vector<int> res;
        for (auto v : buckets | std::views::reverse) // from <ranges> allows us to reverse usign this syntax, cpp 20
            res.insert(res.end(), v.begin(), v.end());

        return vector<int>(res.begin(), res.begin() + k);
    }
};
