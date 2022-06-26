/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1071
	Date : 18-06-22 19:30
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
	lli n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	cin>>q;
	
	/*
	
	So for this problem I just went ahead to find a pattern
	for x > y and x<=y with conditions like x is even and when x is odd
	y is even, y is odd
	Could only pass one of the test case out of two.
	Might give this a try in future.
	*/
	
	while(q--)
	{
		cin>>x>>y;
		
		if(x % 2 == 0)
		{
			if(x >= y) cout<< x*x - (y - 1);
			
			else 
			{
				if(y % 2 == 1) 
					cout << y*y - (x - 1);
				else
					cout<< (y - 1)*(y - 1) + x;
			}
		}
		
		else
		{
			if(x >= y) 
			{
				if(y%2==1)
					cout<< (x - 1)*(x - 1) + y ;
				else
					cout << (y - 1)*(y - 1) + x;
			}
			else 
			{
				if(y%2==1) cout<< y*y - (x - 1);
				else cout<< (y - 1)*(y - 1) + x;
			}
		}
		
		if(q) cout<<"\n";
	}
	
	int do_not_hack;

	return 0;
}



