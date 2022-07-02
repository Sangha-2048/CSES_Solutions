/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1090/
	Date : 02-07-22 16:25
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
	lli maxWt;
	
	cin >> maxWt;
	
	vector<lli>wts(n);
	
	for(i = 0 ; i < n; i++)
		cin >> wts[i];

	sort(all(wts));
	
/*
	The most effective type of grouping will be 
	in the form (wts[0],wts[n-1]), (wts[1],wts[n-2]) ....
	As if we consider consecutive type of grouping there might be 
	a case in which to put (wts[0],wts[1],wts[n-2],wts[n-1])
	we need 3 boxes where as factually we require 2
*/
		
	i = 0, j = n - 1;
	
	while(i <= j)
	{
		// If wts[i] + wts[j] weight is less than
		// maxWt, put these two together
		if(wts[i] + wts[j] <= maxWt) i++,j--;
		
		// If it is greater, put the larger box and
		// move to a box with just smaller weight
		else j--;
		
		count++;
	}
	
	cout << count ;
	
	int do_not_hack;

	return 0;
}



