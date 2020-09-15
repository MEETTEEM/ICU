```c++
#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <string>
#include <set>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iomanip>
#pragma GCC optimize(2)
using namespace std;
const int inf=0x3f3f3f3f;
#define ll long long
#define ull unsigned long long
const int mod = 1e9+7;/// 998244353;
const int mxn = 1e5 +7;
int _ , n , m , t , k , ans , cnt , si , res ;
template <class T>
void rd(T &x){
	T flag = 1 ; x = 0 ; char ch = getchar() ;
	while(!isdigit(ch)) { if(ch=='-') flag = -1; ch = getchar(); }
	while(isdigit(ch)) { x = (x<<1) + (x<<3) + (ch^48); ch = getchar(); }
	x*=flag;
}
ll ksm(ll a,ll b,ll mod)
{
	ll ans = 1 ;
	while(b){
		if(b&1) ans = ans * a % mod ;
		a = a*a%mod ;
		b>>=1;
	} 
	return ans ;
}
void solve()
{
	while(cin>>n)
		cout<<((n+1)%mod*ksm(2*n%mod,mod-2,mod)%mod)<<endl;
}
int main()
{
	/// freopen("input.in","r",stdin) ; freopen("output.in","w",stdout) ;
	ios::sync_with_stdio(false); cin.tie(0) ; cout.tie(0);
	solve();
}


```

