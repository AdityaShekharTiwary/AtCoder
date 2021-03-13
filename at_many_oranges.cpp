#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define vll vector<ll>
#define dbl double
#define vi vector<int>
#define pb push_back
#define input_arr for(int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(ll i=s;i<e;i++)
#define fo(i,s,e) for(ll i=s;i<=e;i++)
#define mi map<int,int>
#define mp make_pair
#define pll pair<ll,ll>
#define mll map<ll,ll>
#define pb push_back
#define ff first
#define ss second
#define test int t; cin>>t; while(t--)
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void fast()
{
	#ifndef ONLINE_JUDGE
		freopen("input1.txt","r",stdin);
		freopen("output1.txt","w",stdout);
	#endif

	fast_IO	
	cout.tie(NULL);
}

void solve()
{
	int a,b,w;
  cin >> a >> b >> w;
	  int m=1e9,M=0;
	  for(int n=1;n<=1000000;n++){
	    if(a*n<=1000*w && 1000*w<=b*n){
	      m=min(m,n);
	      M=max(M,n);
	    }
	  }
	  if(M==0)cout << "UNSATISFIABLE";
	  else cout << m << ' ' << M;
}

int main()
{
	fast();

	//test
	{
		solve();
	}

	return 0;
}