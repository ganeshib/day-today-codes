class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans{1};
        if(rowIndex==0) return ans;
        ans={1,1};
        if(rowIndex==1) return ans;
        
        for(int i=2;i<=rowIndex;i++)
        {
            vector<int>temp(i+1);
            temp[0]=1;
            for(int j=1;j<i;j++) temp[j]=ans[j-1]+ans[j];
            temp[i]=1;
            ans=temp;
        }
        return ans;
    }
};
