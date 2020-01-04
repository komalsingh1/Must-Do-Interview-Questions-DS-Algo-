Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
	    
	    for(int i=1;i<s.size();i++)
	    {
	        for(int j=0;j<s.size()-i;j++)
	        {
	            int k=j+i;
	            if(s[j]==s[k])
	            {
	                dp[j][k]=dp[j+1][k-1];
	            }
	            else
	            {
	                dp[j][k]=min(dp[j][k-1],dp[j+1][k])+1;
	            }
	        }
	    }
	    cout<<dp[0][s.size()-1]<<endl;
	}
	return 0;
}
