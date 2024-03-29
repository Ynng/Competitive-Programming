#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1e9 + 7, MX = 200000 + 5;

char S[MX], T[MX];
int len;
char mapping[300];
bool taken[300];
int main()
{
  scanf("%s %s", S, T);
  len = strlen(S);

  for (int i = 0; i < len; i++)
  {
    if ((mapping[S[i]] != 0 && mapping[S[i]] != T[i]) || (mapping[S[i]] == 0 && taken[T[i]]))
    {
      printf("No\n");
      return 0;
    }

    mapping[S[i]] = T[i];
    taken[T[i]] = true;
  }

  printf("Yes\n");

  return 0;
}