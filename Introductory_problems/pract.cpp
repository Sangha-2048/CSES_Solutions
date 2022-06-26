/*
	Author° : Sangha
	Description :
	Date :
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

lli power(lli x,lli y)
{
    lli res = 1; // Initialize result
 
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x)%mod;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x)%mod; // Change x to x^2
    }
    return res;
}

int isValid(int r,int c)
{
	return ((r>=0 and r<8) and (c>=0 and c<8));
}

int main()
{
    desperate_optimization();
	lli n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	cin>>q;
	int x1,x2,y1,y2;
	while(q--)
	{
		cin>>x1>>y1;
		cin>>x2>>y2;
		
		int dx[] = {2,2,2,-1,-2,-2,-1,-2};
		int dy[] = {-1,1,-1,2,1,-1,-2,-1};
		
		vector<pair<int,int > >sol1;
		vector<pair<int,int > >sol2;
		
		for(i=0;i<8;i++)
		{
			if(isValid(x1 + dx[i],y1 + dy[i]))
				sol1.push_back({x1 + dx[i],y1 + dy[i]});
		}
		
		for(i=0;i<8;i++)
		{
			if(isValid(x2 + dx[i],y2 + dy[i]))
				sol2.push_back({x2 + dx[i],y2 + dy[i]});
		}
		
		flag1 = 0;
	for(i=0;i<sol1.size();i++)
	{
		for(j=0;j<sol2.size();j++)
			if(sol1[i]==sol2[j])
				flag1 = 1;
	}
	
	if(flag1) cout<< "YES";
	
	else cout<< "NO";
		
		if(q) cout<<"\n";
	}

	int do_not_hack;

	return 0;
}



