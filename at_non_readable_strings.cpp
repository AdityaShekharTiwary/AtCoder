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
	string s; cin>>s;
	int n=s.size();
	bool f=true;
	for(int i=1;i<n;i+=2){
		//cout<<s[i]<<" "<<f<<endl;
		if(s[i]>='A' && s[i]<='Z') continue;
		else f=false;
	}

	for(int i=0;i<n;i+=2){
		if(s[i]>='a' && s[i]<='z') continue;
		else f=false;
	}
	if(f) cout<<"Yes\n";
	else cout<<"No\n";
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