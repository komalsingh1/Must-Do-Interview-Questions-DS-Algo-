//Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
     cin>>t;
     while(t--)
     {
         int n,i,sum,start=0;
         cin>>n>>sum;
         int a[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         int curr_sum=a[0];
         for(i=1;i<=n;i++)
         {
             while(curr_sum>sum && start<i-1)
             {
                 curr_sum-=a[start];
                 start++;
             }
             if(curr_sum==sum)
             {
                 cout<<start+1<<" "<<i<<endl;
                 return 0;
             }
             if(i<n)
             curr_sum+=a[i];
         }
         cout<<-1<<endl;
             return 0;
     }
}
