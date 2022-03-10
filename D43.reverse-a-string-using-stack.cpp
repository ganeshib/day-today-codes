https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1


//return the address of the string
void recur(char *s,int len,int ind)
{
    if(ind>=len)
    {
        return;
    }
    char c=s[ind];
    recur(s,len,ind+1);
    s[len-ind-1]=c;
}
char* reverse(char *S, int len)
{
    //code here
    char ans;
    recur(S,len,0);
    return S;
}
