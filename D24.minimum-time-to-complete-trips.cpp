

class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        long long low=0,high=1e14,ans=0;
        while (low<=high)
        {
            long long mid=((high-low)>>1)+low;
            long long timer=0;
            for (auto it : time)
            {
                timer+=mid/it;
            }
            
         if(timer>=totalTrips){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            timer=0;
        }
            return ans;
    }
};
