https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(),strs.end());
        string s1=strs.front(),s2=strs.back(),ans="";
        int n=s1.size();
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
            {
                ans+=s1[i];
            }else{
                break;
            }
        }
        return ans;
    }
};
