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
  // int n, m; 
  // cin >> n >> m;
  //
  // vector<vector<int>> matrix(n, vector<int>(n, 0));
  //
  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < n; j++){
  //     cin >> matrix[i][j];
  //   }
  // }

  vector<vector<int>> matrix = {{1, 2, 0}, {4, 5, 6}, {7, 8, 9}};
  int n = matrix.size();

  int firstDiagonal = 0, secondDiagonal = 0;
  int i = 0, j = 0;
  while (i < n && j < n) {
    firstDiagonal += matrix[i][j];
    secondDiagonal += matrix[i][n-1-j];
    i++; j++;
  }

  cout << "hasilnya adalah " << firstDiagonal << " - " << secondDiagonal << " = " << firstDiagonal - secondDiagonal << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}   
