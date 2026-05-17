#include <ranges>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        int N = nums.size();

        for (auto n : nums)
            counts[n]++; // defaults to zero

        vector<vector<int>> buckets(N + 1); // Max frequency is N, can lead to segfault

        for (auto [num, count] : counts)
            buckets[count].push_back(num);

        vector<int> res;
        for (auto v : buckets | std::views::reverse) // from <ranges> allows us to reverse usign this syntax, cpp 20
        {
            for (int n : v)
            {
                res.push_back(n);
                if (res.size() == k) return res;
            }
        }

        return res;
    }
};
