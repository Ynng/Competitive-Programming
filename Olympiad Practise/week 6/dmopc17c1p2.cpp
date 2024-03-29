#include <stdio.h>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <bitset>
#include <queue>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std; 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, int> pli;
typedef pair<ll, int> pil;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1e9+7, MX = 100000 + 5;

ll N , M;
ll a[MX];
ll answer = 0;
map<ll,ll> m;
int main()
{
  scanf("%lld %lld", &N, &M);
  for(int i = 1; i <= N; i++)
  {
    scanf("%lld", a+i);
    a[i]+=a[i-1];
  }

  m[0]++;
  for(int i = 1; i <= N; i++)
  {
    answer+=m[a[i]%M];
    m[a[i]%M]++;
  }
  printf("%lld", answer);
  return 0;
}