 /*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/2165	
	Date : 22-06-22 14:42
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

void towerOfHanoi(int disks, int from, int to, int aux)
{
	// Base case if disk == 1 we need to move from A to C 
	if(disks == 1) 
	{
		cout << from << " " << to << "\n";
		return;
	}
	
	// Breaking the problem into subproblems
	// first tranfering all above n-1 disks to auxilary pillar
	towerOfHanoi(disks - 1, from , aux , to);
	
	// Then moving the largest disk remaining on A -> C
	cout << from << " " << to << "\n";
	
	// Moving n-1 disks from auxilary pillar to destination pillar C
	// using source pillar
	towerOfHanoi(disks - 1, aux , to , from);
}

int main()
{
    desperate_optimization(false);
	int n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	cin >> n;
	
// Number of moves required = 2^n - 1
	cout << (1 << n) - 1 << "\n";

/*
	Now we need to move disks from left moves pillar to
	right most pillar	
	\ \ \
	A B C
	=> A to C using B
	
	Naming pillars as A -> from , C -> to and B -> auxilary 
*/
	towerOfHanoi(n , 1 , 3 , 2);

	int do_not_hack;

	return 0;
}



