/*
	Author° : Sangha
	Description : https://cses.fi/problemset/task/1624
	Date : 26-06-22 18:28
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

0,0 | 0,1 | 0,2 | 0,3 | 0,4 | 0,5 | 0,6 | 0,7
1,0 | 1,1 | 1,2 | 1,3 | 1,4 | 1,5 | 1,6 | 1,7
2,0 | 2,1 | 2,2 | 2,3 | 2,4 | 2,5 | 2,6 | 2,7
3,0 | 3,1 | 3,2 | 3,3 | 3,4 | 3,5 | 3,6 | 3,7
4,0 | 4,1 | 4,2 | 4,3 | 4,4 | 4,5 | 4,6 | 4,7
5,0 | 5,1 | 5,2 | 5,3 | 5,4 | 5,5 | 5,6 | 5,7
6,0 | 6,1 | 6,2 | 6,3 | 6,4 | 6,5 | 6,6 | 6,7
7,0 | 7,1 | 7,2 | 7,3 | 7,4 | 7,5 | 7,6 | 7,7
 


// Global variable to store the # ways
lli ans = 0;

// To check if the position is safe according to 
// the left upper diagonal row + column should not be set
// since for a particular sum, represents left upper diagonal 
vector<int>leftUpper(16,0);

// To check if the position is safe according to 
// the right lower diagonal row - column + 7 should not be set
// since for a particular difference, represents right lower diagonal 
vector<int>rightLower(16,0);

// Checking if the row is placed or not
vector<int>placedRow(8,0);

// Checking if the cell has been placed or not
vector<vector<int > >placed(8,vector<int>(8,0));

void solve(string chessBoard[],int curColumn)
{
	// curColumn == 8 => all 8 queens have been 
	// placed .'. answer++
	if( curColumn == 8 )
	{
		ans++;
		return;
	}
	
	// Going through each row for that column
	// Downward iteration
	for( int row = 0 ; row < 8 ; row++ )
	{
		if((chessBoard[row][curColumn] == '.') and (leftUpper[row + curColumn] == 0) and (rightLower[row - curColumn + 7] == 0) and (placedRow[row] == 0) and placed[row][curColumn]==0)
		{
			// Setting all checks to true
			leftUpper[row+curColumn] = rightLower[row - curColumn + 7] = placedRow[row] = placed[row][curColumn] = 1;
			// Moving to next column
			solve(chessBoard, curColumn + 1);
			// Back tracking solution therefore reverting to initial
			// state
			leftUpper[row+curColumn] = rightLower[row - curColumn + 7] = placedRow[row] = placed[row][curColumn] = 0;
		}	
	}
}

int main()
{
    desperate_optimization(false);
	int n,m,q,node,edge,x,y,i,j,count=0,temp,flag1=0,flag2=0;

	string chessBoard[8];
	
	for( i = 0 ; i < 8 ; i++ )
		cin >> chessBoard[i];
		
	solve(chessBoard,n);
	
	cout << ans; 

	int do_not_hack;

	return 0;
}



