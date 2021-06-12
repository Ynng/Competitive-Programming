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

const int MOD = 1000000007, MX = 1000 + 5;
int N, T;
bool exist[MX];

int firstMissingPositive(vector<int> &nums)
{
  ms(exist, 0);
  int len = nums.size();
  for (int i = 0; i < len; i++)
    if (nums[i] < MX - 5 && nums[i] > 0)
      exist[nums[i]] = true;
  for (int i = 1; i < MX - 5; i++)
    if (!exist[i])
      return i;

  return 0;
}

void solve()
{
  vector<int> v;
  scanf("%d", &N);
  for (int i = 1, temp; i <= N; i++)
  {
    scanf("%d", &temp);
    v.push_back(temp);
  }
  printf("%d\n", firstMissingPositive(v));
}

int main()
{
  scanf("%d", &T);
  for (int i = 1; i <= T; i++)
    solve();
}