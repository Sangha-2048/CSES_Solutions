/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1070
	Date : 18th June 2022
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

	cin>>n;
	
/* 

n = 1  -> 1
n = 2 ->  1 2 (No Solution)
n = 3 -> 1 3 2 (No Solution)
n = 4 -> 2 4 1 3 (No Solution)
n = 5 -> 2 4 1 3 5 (Correct)
n = 6 -> 2 4 6 1 3 5  (Correct)
n = 7 -> 2 4 6 1 3 5 7 (Correct)
.
.
.
=> First print even numbers then odd numbers

# Tried odd first and then even, couldn't pass 1 3 2 4 case
*/
	if(n==1) return cout<< 1, 0;

	if(n<=3) return cout<< "NO SOLUTION",0 ;
	
	for( i=2 ; i<=n ; i += 2 )
		cout<< i << " " ;
		
	for( i = 1 ; i<=n ; i += 2 )
		cout<< i << " " ;
 
	int do_not_hack;

	return 0;
}



