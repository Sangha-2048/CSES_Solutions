/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1092/
	Date : 19-06-22 12:51
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
	
	lli totalSum = n * (n + 1) / 2;
	
	// If totalSum is odd, it cann't be divided into 
	// two equal halfs
	if(totalSum & 1) return cout<<"NO",0; 

	// The catch is we want a series of type
	// abba abba abba as the sum of (n+1) + (n+4) == (n+2) + (n+3)
	// for n = 0,1,2...
	
	// Also another finding, if n%4==1 or n%4==2, then segration of number is not 
	// possible
	
	// So if we have n%4==3, then we can put 1,2 in one set and 3 in anther to balance out
	// the sum and then from 4 onwards following our sequence of abba abba
	
	// if n%4 == 0 => all numbers can be grouped in set of 4.
	// We can follow abba sequence from the 1 itself

	if(n % 4 == 2 || n % 4 == 1) return cout<<"NO",0;

	vector<int>S1,S2;	
	
	if(n % 4 == 3)
	{		
		S1.push_back(1);
		S1.push_back(2);
		S2.push_back(3);	
		
		for(i = 4 ; i<=n ; i++ )
		{	
			if((i % 4 == 0) || (i % 4 == 3))
				S1.push_back(i);
				
			else S2.push_back(i);
		}
	} 

	else
	{
		S1.push_back(1);
		S2.push_back(2);
		S2.push_back(3);
		S1.push_back(4);
		
		for(i = 5 ; i<=n ; i++ )
		{	
			// Changed conditions to include the
			// numbers accordingly
			if((i % 4 == 1) || (i % 4 == 0)) 
				S1.push_back(i);
				
			else S2.push_back(i);
		}
	}

	cout<<"YES\n";
	cout<< S1.size() << "\n" ;
	for(i = 0; i < S1.size() ; i++)
		cout<< S1[i] << " "	;
	cout<< "\n" <<S2.size() << "\n" ;
	for(i = 0; i < S2.size() ; i++)
		cout<< S2[i] << " "	;
	
	int do_not_hack;

	return 0;
}



