/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1094
	Date : 18th June 2022
*/

#include<bits/stdc++.h>

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

typedef long long ll;
//typedef long long int lli;
#define int long long int  // If u uncomment this , comment upper one (long long int thing)

//n!=0 and (n-1)&(n) To check for power of 2

#define INF (1<<29)
#define LINF (1ll<<60)
#define deb(x) cout<<#x<<" = "<<x<<"\n"
#define all(x) (x).begin(),(x).end()

const int mod = 1e9+7;

using namespace std;

void desperate_optimization(bool submitting=true,int precision=10)
{
  if(!submitting) return;
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(precision);
}

int32_t main()
{
    desperate_optimization(false);
	int n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	cin>>n;
	
	int arr[n];
	
	for( i=0 ; i<n ; i++)
		cin>>arr[i];
		
	for( i = 1 ; i < n ; i++ )
	{
		if(arr[i] < arr[i - 1])
		{
			// Since min. is asked
			// we'll make next element of array
			// just equal to the previous one
			// to satisfy given constraints
			
			count += (arr[i-1] - arr[i]); 
			arr[i] = arr[i-1];
		}
	}
	
	cout<< count ;

	int do_not_hack;

	return 0;
}



