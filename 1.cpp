#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector <int>
#define vc vector <char>
#define vl vector <ll>
#define mp make_pair
#define pb push_back
#define lcm(a, b) a * b / __gcd(a,b)
const int MOD = 1e9+7;
using namespace std;

void solve(){
  /* 
    string s; cin >> s;
  */
  string s = "NEGIE1";
  vector<char> temp;

  for(int i = s.size()-1; i >= 0; --i){
    if(s[i] >= '0' && '9' >= s[i] ) temp.pb(s[i]);
    else cout << s[i];
  }

  for (int i = temp.size()-1; i >= 0; --i){
    cout << temp[i];
    temp.pop_back();
  }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}  
