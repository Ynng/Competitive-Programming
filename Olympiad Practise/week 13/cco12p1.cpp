#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define INF 0x3f3f3f3f // for int
#define LL_INF 0x3f3f3f3f3f3f3f3f // for ll
#define sz(x) (int)(x).size()
#define ms(x, y) memset(x, y, sizeof(x))
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1e9+7, MX = 10000 + 5;

int W, D, V;
vi d;
int mxd, mid;
int T;

bool recursion(int step, int curNum){
  if(step == 0){
    if(curNum<0 || curNum>9)return false;
    for(int i : d)
      if(i==curNum)return true;
    return false;
  }
  for(int i : d){
    if(recursion(step-1, curNum-i))return true;
    if(i==0 && curNum == 0)
      return true;
    else if(curNum==0)
      return false;
    else if(i!=0 && curNum%i==0)
      if(recursion(step-1, curNum/i))return true;
  }
  return false;
}

int main()
{
  scanf("%d", &W);
  scanf("%d", &D);
  for(int i = 1, t; i <= D; i++)
  {
    scanf("%d", &t);
    d.push_back(t);
    mxd = max(mxd, t);
    mid = min(mid, t);
  }
  scanf("%d", &V);
  for(int i = 1; i <= V; i++)
  {
    scanf("%d", &T);
    if(recursion(W, T)){
      printf("Y\n");
    }else{
      printf("N\n");
    }
  }
  
  return 0;
}