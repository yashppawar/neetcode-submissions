class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> topk;

        for (auto x: nums) {
            counter[x] = counter[x] + 1;
        }

        for (auto pair: counter) {
            buckets[pair.second].push_back(pair.first);
        }

        for ( int i = buckets.size () - 1; i >  0;i-- ){
            for (int n: buckets[i]) {
                topk.push_back(n);

                if (topk.size() == k)
                    return topk;
            }
        }
        
        return topk;
    }
};
