/*
	Author° : Sangha 
	Description : https://cses.fi/problemset/task/1091
	Date : 08-07-22 22:27
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

signed main()
{
    desperate_optimization(false);
	int n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	cin >> n ;
	cin >> m ;
	
	vector<int>prices;
	/*
		Defining a pair int set to store 
		duplicate values by forming 
		(values,idx) pair	
	*/
	
	set<pair<int,int > >maxPrices;
	
	for(i = 0 ; i < n ; i++)
	{
		cin >> temp;
		maxPrices.insert(make_pair(temp,i));
	}	
	
	i = 0 ;
	while( m-- )
	{
		cin >> temp ;
		
		// An iterator to find the 
		// the last just min. value of the req. number
		// {(4,1), (4,2), (4,3)}
		// so for 4 we'll get (4,3)
		// Since we'll be searching for lower_bound of
		// 5
		
		set<pair<int,int> >::iterator iter = maxPrices.lower_bound(make_pair(temp+1,0));
	
		if(iter == maxPrices.begin())
			cout << -1;
		
		else 
		{	
			// Decreasing the iterator 
			// to get to the actual value
			iter--;
			cout<< (*iter).first;
			
			// Removing the ticket as 
			// it has been purchased
			maxPrices.erase(iter);
		}
			
		if(m)
			cout << "\n";
	}
	
	int do_not_hack;

	return 0;
}



