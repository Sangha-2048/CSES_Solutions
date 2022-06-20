/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1622
	Date : 21-06-22 01:06
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

	string str;
/*
	Going  straight away with brute force approach,
	since constraints are smaller, we can easily pass
	
	So the max. number that we can encounter is 8!, number of ways of arranging
	8 different characters in a string.
	
	So running a loop from 1 -> 40320, and inserting all the permutations 
	in a set.
	
	next_permutation() gives the next permutation of the sequence passed to it
*/
	
	cin >> str ;
	
	set<string>S;
	S.insert(str);
	
	for(i = 1 ; i <= 40320 ; i++)
	{
		next_permutation(all(str));
		S.insert(str);
	}
	
	cout << S.size() << "\n";
	for(auto it = S.begin() ; it != S.end() ; it++)
		cout<< *it << "\n" ;
	
	int do_not_hack;

	return 0;
}



