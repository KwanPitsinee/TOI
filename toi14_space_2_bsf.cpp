#include <bits/stdc++.h>
using namespace std;

int x[4] = {0, 0, 1, -1};
int y[4] = {1, -1, 0, 0};
bool a[10002][2002];
queue<pair<int, int>> q;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int ans1 = 0; // triangle
  int ans2 = 0; // square
  int ans3 = 0; // diamond
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      char b;
      cin>>b;
      if(b=='1')a[i][j]=true;
    }
  }

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (a[i][j] == true) {
        int cnt = 1;
        int mni = i, mxi = i, mnj = j, mxj = j;
        q.push({i, j});
        a[i][j] = false;
        while (!q.empty()) {
          int in = q.front().first;
          int jn = q.front().second;
          q.pop();
          for (int k = 0; k < 4; k++) {
            int ii = in + x[k];
            int jj = jn + y[k];
            if (a[ii][jj] == true) {
              q.push({ii, jj});
              a[ii][jj] = false;
              cnt++;
              mni = min(mni, ii);
              mnj = min(mnj, jj);
              mxi = max(mxi, ii);
              mxj = max(mxj, jj);
            }
          }
        }
        if (mxi - mni != mxj - mnj) {
          ans1++;
        } else if ((mxi - mni + 1) * (mxi - mni + 1) == cnt) {
          ans2++;
        } else {
          ans3++;
        }
      }
    }
  }
  cout << ans2 << " " << ans3 << " " << ans1;
}

// https://beta.programming.in.th/tasks/toi14_space_1

