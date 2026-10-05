class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0, high = nums.size()-1;

        while(high - low >2){
            int mid1 = low + (high - low)/3;
            int mid2 = high - (high -low)/3;

            if(nums[mid1] < nums[mid2]){
                high = mid2 - 1;
            }
            else{
                low = mid1 + 1;
            }
        }
        int ans = nums[low];

        for(int i = low+1; i<nums.size(); i++){
            ans = min(ans, nums[i]);
        }
        return ans;
    }
};
