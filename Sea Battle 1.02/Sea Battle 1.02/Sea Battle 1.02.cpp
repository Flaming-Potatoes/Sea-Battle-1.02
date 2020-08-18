#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
#include<utility>
#include<string>
#include<set>
#include<iterator>
#include<queue>
#include<cstring>
#include<stack>
#include<math.h>
#include<algorithm>
#define ll long long
#define vii vector <int> 
#define rep(i, k, n) for(i=k;i<=n;i++)
#define irep(i, k, n) for(i=k;i>=n;i--)
#define newl cout << "\n";
#define len(x) x.length()
#define fastin ios_base::sync_with_stdio(false);cin.tie(NULL);
#define cspace(k) cout << k << " ";
#define cendl(k) cout << k << "\n";
#define MIN(a, b) (a > b) ? b : a;
#define MAX(a, b) (a > b) ? a : b;
#define test int t; cin >> t; while(t--)
const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
#pragma warning(disable : 4996);
using namespace std;
const long long inf = (long long)1e18 + 111;
const int iinf = (int)1e9 + 111;
const int SIZE = 1e5 + 11;

int n, i, j;
bool yes = false;
string s;
pair <int, int> kol;
vector <string> v;

pair<int, int> GetKol() {
	int x = 0, y = 0;
	if (s[0] == 'O') {
		x++;
	}
	if (s[1] == 'O') {
		x++;
	}
	if (s[3] == 'O') {
		y++;
	}
	if (s[4] == 'O') {
		y++;
	}
	return { x, y };
}

int main() {
	cin >> n;
	rep(i, 1, n) {
		cin >> s;
		kol = GetKol();
		//cout << kol.first << " " << kol.second << endl;
		if (kol.first == 2 && !yes) {
			s[0] = '+';
			s[1] = '+';
			yes = true;
		}
		else if (kol.second == 2 && !yes) {
			s[3] = '+';
			s[4] = '+';
			yes = true;
		}
		v.push_back(s);
	}
	if (yes) {
		cendl("YES");
		for (auto r : v) {
			cendl(r);
		}
	}
	else {
		cendl("NO");
	}
}