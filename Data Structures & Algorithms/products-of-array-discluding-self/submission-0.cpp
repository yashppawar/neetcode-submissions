class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(), 1);
        vector<int> suf(nums.size(), 1);

        int p = 1;
        int s = 1;
        for (int i = 0, j = nums.size() - 1; i < nums.size(); i++, j--)
        {
            pre[i] = p;
            suf[j] = s;
            p *= nums[i];
            s *= nums[j]; 
        }

        for (int i = 0; i < nums.size(); i++)
        {
            pre[i] *= suf[i];
        }

        return pre;
    }
};
