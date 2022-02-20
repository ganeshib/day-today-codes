class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,cursum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(cursum<0)
            {
                cursum=0;
            }
            cursum+=nums[i];
            maxi=max(cursum,maxi);
        }
        return maxi;
    }
};
