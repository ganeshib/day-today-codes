https://leetcode.com/problems/counting-bits/

class Solution {
public:
    
    int countbit(int n)
    {
        int count=0;
        while(n)
        {
            n=n&(n-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        int count=0;
        while(count<=n)
        {
         ans.push_back(countbit(count++));   
        }
     return ans;   
    }
};
