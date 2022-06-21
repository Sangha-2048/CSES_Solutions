/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1623
	Date :	21-06-22 22:29
*/

#include<bits/stdc++.h>

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

typedef long long ll;
typedef long long int lli;
//#define int long long int  // If u uncomment this , comment upper one (long long int thing)

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

int main()
{
    desperate_optimization(false);
	int n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	cin >> n;
	
	lli arr[n];
	lli total = 0;
	
	for( i = 0 ; i < n ; i++ )
		cin >> arr[i], total += arr[i];
		
	// cout << total; 
	
	lli curSum = 0;
	lli minDiff = INT_MAX;
	
/* 
	This problem is based upon trying all
	possible combinations of segregating the elements 
	into two group, such that their difference in min.
	
	To list all possible combinations we can use recursion or
	power set method.
	
	Here I am iterating through the possible combinations using 
	1<<n => 2^n combinations

	Theoritically if we have 2 numbers possible sets can be
	00, 01, 10, 11 . Considering numbers falling on 0 places in one set and 1 as other
	
	Ex. if we have a set {1,2}
	
	So possible sets {1,2} {}, {1} {2}, {2} {1}, {} {1,2}
	
*/
	
	// Outer loop iterating all combinations
	for( i = 0 ; i < (1<<n) ; i++ )
	{
		curSum = 0;
		// Inner loop to choose the elements
		for( j = 0 ; j < n ; j++ )
		{
			// Taking only the numbers that 
			// that result in non-zero values after 'and' operation
			
			// i -> 0 ... 2^n-1 , using bit maniputaion here
			if( i & (1<<j) )
				curSum += arr[j];
		}
		
		// Since we need 
		// Two sums with min diff
		// => S1 - S2 = min.
		// and S1 + S2 = total
		// => S2 = total - S1
		// S1 = curSum, we are calulating each time
		minDiff = min(minDiff , abs(total - curSum - curSum));
	}
	
	return cout<< minDiff , 0;
	
	int do_not_hack;

	return 0;
}



