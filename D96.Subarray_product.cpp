class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k==0)
        {
            return 0;
        }
        int count=0,j=0,mul=1;
     for(int i=0;i<nums.size();i++)
     {
         mul*=nums[i];
         while(j<nums.size() && mul>=k)
         {
             mul=mul/nums[j++];
         }
         count+=(i-j+1);
     }
        if(count<0)
        {
            return 0;
        }
        return count;
    }
};
