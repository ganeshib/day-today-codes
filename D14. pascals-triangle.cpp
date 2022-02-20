https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> ans;
        for(int i=0;i<numRows;i++)
        {
           vector<int>rowans(i+1,1);
            for(int j=1;j<i;j++)
            {
                rowans[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(rowans);
        }
        return ans;
    }
};
