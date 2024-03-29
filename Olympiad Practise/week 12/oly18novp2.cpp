#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define INF 0x3f3f3f3f            // for int
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

const int MOD = 1e9 + 7, MX = 1000000 + 5;

int N, MXD;
vector<int> in[MX];

int main()
{
  scanf("%d", &N);
  for (int i = 1, d, p; i <= N; i++)
  {
    scanf("%d %d", &d, &p);
    MXD = max(MXD, d);
    in[d].push_back(p);
  }
  ll sum = 0;
  priority_queue<int> pq;
  for (int i = MXD; i >= 1; i--)
  {
    for(int h : in[i])
      pq.push(h);
    if(!pq.empty()){
      sum+=pq.top();
      pq.pop();
    }
  }

  printf("%lld\n", sum);

  return 0;
}