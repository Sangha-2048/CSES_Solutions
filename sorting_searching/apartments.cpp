/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1084
	Date :	26-06-22 21:32
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
	cin >> m;
	cin >> x;
	
	vector<int>a(n),b(m);
	
	for(i=0;i<n;i++)
		cin >> a[i];
	
	for(i=0;i<m;i++)
		cin >> b[i];
		
	sort(all(a));
	sort(all(b));
	
	i = j = 0 ;
	while((i < n) and (j < m))
	{
		// if the max. size (actual size + desired size) < size of apartment
		// then move to next applicant which has getter calue of actualSize + desired size
		if(a[i]+x < b[j]) i++;
		
		// if the min. size (actual size - desired size) > size of apartment
		// then move to next apartment with larger size
		else if(a[i]-x > b[j]) j++;
		
		// Perfect condition , .'. count + 1
		else i++,j++,count++;
		
	}
	
	cout << count;

	int do_not_hack;

	return 0;
}



