/*
	Author? : Sangha
	Description : https://cses.fi/problemset/task/1755/
	Date :	27-06-20 15:26
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
 
int32_t main()
{
    desperate_optimization(false);
	int n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;	
	string str;
	cin>>str;
	
/*
	For this problem, I'll first sort the string
	so that all the similar character comes together
*/
	
	// character ch to store a last remaining middle 
	// character for an odd length pallindrome
	char ch='x';
	
	string sol="";
	sort(all(str));
	
	stack<char>st;
	
	st.push(str[0]);
	
	for(i=1;str[i];i++)
	{
		// If no element is present, push
		// element in the stack
		if(st.empty())
			st.push(str[i]);
			
		// Since we are popping same elements from the stack that 
		// have one duplicate, a necessary condition for pallindrome	
		else if(str[i]==st.top())
			st.pop(),sol+=str[i];
		
		// Push non-similar elements in the stack
		else st.push(str[i]);
	}
	
	// If size of stack is one
	// => The character that needs to be inserted in the middle
	if(st.size()==1)
		ch=st.top();
		
	// If there are more than 1, non-similar elements
	// creating a palindrome string is NT
	if(st.size()>1)		
		return cout<<"NO SOLUTION",0;
	
	// If string is sized even, abba
	if(ch=='x')
	{
		cout<<sol;
		
		reverse(all(sol));
		cout<<sol;
		return 0;
	}
 
 	// For odd length string abcba
 	// Here x will be holding c
	cout<<sol<<ch;
	
	reverse(all(sol));
	
	cout<<sol;
	
	// In this I am only storing first half of the string as
	// other half can be made by reversing it
	
	int do_not_hack;
 
	return 0;
}
