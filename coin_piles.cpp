/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1754
	Date : 20-06-22 16:50
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
    desperate_optimization();
	int n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	cin >> q;
	
/* This problem can be solved using brute force for smaller constraints but, with given TL and
constraints, need to go with some optimized solution
*/
	
	while (q--)
	{
		cin >> x >> y ;
		
		// Putting the larger number in x
		if( x < y ) swap(x, y);
		
		// So if we have a number much larger than the other
		// Like 10 and 1, then its impossible to solve 
		if(x/2 > y) cout << "NO" ;
		
		// Now since we are removing a count of three each time
		// the sum of number should be divisible by 3
		else if((x + y) % 3 != 0) cout << "NO";
		
		// Above two are only limiting criteria for this problem
		else cout<< "YES";
		
		if(q) cout<<"\n";
	}

	int do_not_hack;

	return 0;
}



