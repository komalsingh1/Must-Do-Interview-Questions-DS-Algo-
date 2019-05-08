#include<bits/stdc++.h>
using namespace std;
long long int dp[100002];
int main() 
{
int t;
cin>>t;
while(t--)
{
    long long int n;
    cin>>n;
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=100001;i++)
    dp[i]=(dp[i-1]+dp[i-2])%1000000007;
    cout<<dp[n]<<endl;
}
}
