/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1618
	Date : 19-06-22 19:29
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
	
	// Number of 5s in a factorial can be determined by
	// dividing the number by increasing powers of 5 and 
	// summing up the result
	// Since the number of 2s will always be greater than or equal to
	// number of 5s, we are considering 5s here
	// Number of trailing 0s = prime factors of 5 and 2
	for(i = n; i > 1 ; i /= 5)
		count += i/5;
	cout<< count;
	
	int do_not_hack;

	return 0;
}



