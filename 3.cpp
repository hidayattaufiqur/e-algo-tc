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
  vector<string> input = {"xc", "dz", "bbb", "dz"};
  vector<string> query = {"bbb", "ac", "dz"}; 

  // int n, m; 
  // cin >> n >> m;
  //
  // for(int i = 0; i < n; i++){
  //   string s;
  //   cin >> s;
  //   input.push_back(s);
  // }
  //
  // for(int i = 0; i < m; i++){
  //   string s;
  //   cin >> s;
  //   query.push_back(s);
  // }
  
  vector<int> ans(query.size(), 0);
  for (int i = 0; i < query.size(); ++i) {
    for (int j = 0; j < input.size(); ++j) {
       if (query[i] == input[j]) {
        ans[i]++;
       }
    }
  }

  for (auto x : ans) {
    cout << x << ", ";
  }

  for (int i = 0; i < ans.size(); ++i) {
    if (i == 0) { 
      if (ans[i] == 0) cout << "karena kata " << query[i] << " tidak ada di INPUT, ";
      else cout << "karena kata " << query[i] << " terdapat " << ans[i] << " pada INPUT, ";
    } else if (i == ans.size() - 1) {
      if (ans[i] == 0) cout << "dan kata " << query[i] << " tidak ada di INPUT"; 
      else cout << "dan kata " << query[i] << " terdapat " << ans[i] << " pada INPUT";
    } else {
      if (ans[i] == 0) cout << "kata " << query[i] << " tidak ada di INPUT, ";
      else cout << "kata " << query[i] << " terdapat " << ans[i] << " pada INPUT, ";
    }
  }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   
