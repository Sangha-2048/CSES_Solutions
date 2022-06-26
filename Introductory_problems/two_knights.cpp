/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1072
	Date : 19-06-22 11:32
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

	cin >> n ;

/*
 	Total number of ways to select two cell
 	from n^2 cells  = n^2 C 2
 	=> n^2 * (n^2 - 1) / 2
 	
	So in a 2 x 3 cell, there are 2 locations in which
	the knights are vulnerable to attack.
	2 * (number of 2 x 3 cells present in n^2 matrix)
	=> 2 * (n - 1) * (n - 2) (Selecting 2 consecutive cells from n cells) * (Selecting 3 consecutive cells from n cells)
	And similarly for 3 x 2 cell
	=> 2 * (n - 2) * (n - 1)
	
	Therefore total locations = 4 * (n - 1)  * (n - 2)
 	
*/
	
	lli totalWays = 0;
	lli notPossibleLocations = 0;
	
	for( i = 1 ; i <= n ; i++ )
	{
		totalWays = 1ll * (i * i) * (i * i - 1) / 2;
		notPossibleLocations = 4 * (i - 1) * (i - 2);
		
		lli ans =  totalWays - notPossibleLocations;
		
		cout<< ans << "\n";
	}

	int do_not_hack;

	return 0;
}



