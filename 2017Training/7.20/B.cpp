#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<ctime>
#include<queue>
#define FILEIN freopen("binary.in", "r", stdin)
#define FILEOUT freopen("binary.out", "w", stdout)
#define CLOSEIO ios::sync_with_stdio(false)
#define PI acos(-1)
#define CLR(a) memset(a,0,sizeof(a))
#define MEM(a,x) memset(a,x,sizoef(a))
#define eps 1e-8
#define sf(x) scanf("%d",&x)
#define PB(x) push_back(x)
#define MP(x, y) make_pair(x, y)
#define lowbit(x) x&(-x)
#define fi first
#define se second
#define rep(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define drep(a,b,c) for(int (a)=(b);(a)>(c);--(a))
#define dbg(x) cout << #x << "=" << x << endl
using namespace std;
const int maxn = 1e5+5;
typedef long long ll;
typedef double db;
const int inf = INT_MAX;
const ll INF = LLONG_MAX;
const ll mod = 1e9 + 7;
ll mul(ll x,ll y){return x*y%mod;}
ll q_mul(ll a, ll b){ ll ans = 0;while(b){if(b & 1){ans=(ans+a)%mod;} b>>=1;a=(a+a) % mod;}return ans;}
ll q_pow(ll x , ll y){ll res=1;while(y){if(y&1) res=q_mul(res,x) ; y>>=1 ; x=q_mul(x,x);} return res;}
ll inv(ll x) { return q_pow(x, mod-2); }
int Read() {
    int x = 0, F = 1; char C = getchar();
    while (C < '0' || C > '9') { if (C == '-') F = -F; C = getchar(); }
    while (C >= '0' && C <= '9') { x = x * 10 - '0' + C, C = getchar(); }
    return x * F;
}
string tobinary(int x){
    string s="";
    if(!x) return s="0";
    while(x){
        s+=x%2+'0';
        x/=2;
    }
    return s;
}
int main()
{
   // FILEIN;
    //FILEOUT;
    int n;
    int a = 1;
    scanf("%d",&n);

    while(a<n){
        a*=2;
    }
    if(a!=n){
    int cnt = a-n;
    int b = a/2;
    string cmp = tobinary(b);
    for(int i=0;i<cnt;i++){
        string p = tobinary(i);
        while(p.length()!=cmp.length()-1){
            p+='0';
        }
        reverse(p.begin(),p.end());
        cout << p << "\n";
    }
    for(int i=2*a-2*n;i<a;i++){
        string p = tobinary(i);
        while(p.length()<cmp.length()){
            p+='0';
        }
        reverse(p.begin(),p.end());
        cout << p << "\n";
    }
    }
    else{
        string cmp = tobinary(n-1);
        for(int i=0;i<n;i++){
            string p = tobinary(i);
            while(p.length()!=cmp.length()){
            p+='0';
        }
            reverse(p.begin(),p.end());
            cout << p<<endl;
        }
    }
}
