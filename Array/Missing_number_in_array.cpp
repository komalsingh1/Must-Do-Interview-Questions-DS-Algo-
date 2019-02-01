//Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing,
// the missing number is to be found(Give the most Optimized solution)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int i,n,sum=0,sum1;
	 cin>>n;
	 int a[n-1];
	 for(i=0;i<n-1;i++)
	 cin>>a[i];
	 sum=n*(n+1)/2;
	 for(i=0;i<n-1;i++)
	 {
	 	sum1=sum-a[i];
	}
	cout<<sum1<<endl;	
	}
	return 0;
}



//Concept of XOR can be also used in the question x^x=0
