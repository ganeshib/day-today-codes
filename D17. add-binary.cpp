https://leetcode.com/problems/add-binary/

class Solution {
public:
    string addBinary(string a, string b) {
       int n1=a.size()-1;
        int n2=b.size()-1;
        string ans="";
        int i=n1,j=n2;
        int carry=0;
        while(i>=0 || j>=0 || carry>0)
        {
            if(i>=0)
            {
                carry+=a[i--]-'0';
            }
            
            if(j>=0)
            {
                carry+=b[j--]-'0';
            }
              ans+=(carry%2)+'0';
            carry=carry/2;
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};












