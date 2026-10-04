class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2* nums.size());

        int i =0;
        while(i<nums.size()){
            ans[i] = nums[i];
            i++;
        }

        int j =0; 
        while(j < nums.size()){
            ans[i++] = nums[j++];
        }
        return ans;
    }
};