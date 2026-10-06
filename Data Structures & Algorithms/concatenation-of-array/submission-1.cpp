class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size());
        int i = 0;
        for(int j=0; j<nums.size(); j++){
            ans[i++] = nums[j];
        }

        for(int j =0; j<nums.size(); j++){
            ans[i++] = nums[j];
        }

        return ans;
    }
};