#include "Header.h"
#pragma warning(disable : 4996);
#define fastio                                                 \
                             ios_base::sync_with_stdio(false); \
                             cin.tie(NULL);
#define ll                   long long
#define MOD                  1000000007
#define rep(i, k, n)         for (i = k; i <= n; i++)
#define repp(i, k, n, x)     for (i = k; i <= n; i = i + x)
#define irep(i, k, n)        for (i = k; i >= n; i--)
#define endl                 "\n"
#define cendl(k)             cout << k << endl;
#define cspace(k)            cout << k << " ";
#define No                   cendl("No");
#define Yes                  cendl("Yes");
#define newl                 cout << endl;
#define space                cout << " ";
#define sz(x)                ((ll)x.size())
#define test                 int tests; cin >> tests; while (tests--)
#define MAX(a, b)            ((a) > (b) ? (a) : (b))
#define MIN(a, b)            ((a) < (b) ? (a) : (b))
#define ABS(x)               ((x) < 0 ? - (x) : (x))
#define pmax(a, b)           if(a < b) swap(a, b);      
#define pmin(a, b)           if(a > b) swap(a, b);
#define c                    cout
#define fx                   cerr << "/////";
#define gcd                  __gcd
using namespace std;
extern char PlayerDefense[100][100];
extern char PlayerAttack[100][100];
extern char BotDefense[100][100];
extern char BotAttack[100][100];
void ShootInPlayer(ll x, ll y, char PD[100][100], char PA[100][100], bool bot);
extern char ch;
extern ll cordx, cordy;
extern int i, j;
extern int KolSheepsPlayer;
void PrintFieldPlayerDefense();

bool ChoosePos() {
    while (true) {
        ch = getch();
        if (ch == 'q' || ch == 'Q' || ch == '�' || ch == '�') {
//system("cls");
            ShootInPlayer(cordx, cordy, BotDefense, PlayerAttack, false);
        }
        else if (ch == 'W' || ch == 'w' || ch == '�' || ch == '�' || ch == 72) {
            cordx = max(1, cordx - 1);
        }
        else if (ch == 'D' || ch == 'd' || ch == '�' || ch == '�' || ch == 77) {
            cordy = min(9, cordy + 1 - 1 + 1);
        }
        else if (ch == 'S' || ch == 's' || ch == '�' || ch == '�' || ch == 75) {
            cordx = min(9, cordx + 1);
        }
        else if (ch == 'A' || ch == 'a' || ch == '�' || ch == '�' || ch == 80) {
            cordy = max(1, cordy - 1);
        }
        if (KolSheepsPlayer <= 0) {
            cendl("Player Win");
            return false;
        }
        system("cls");
        cout << cordx << ' ' << cordy << endl;
        cendl(KolSheepsPlayer);
        return true;
    }
}