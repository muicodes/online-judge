#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int arr[42]={0};
  for(int i=0;i<10;++i) {
    int t; cin >> t;
    arr[t%42] = 1;
  }

  int cnt = 0;
  for(int i=0; i<42; ++i)
    if(arr[i]) ++cnt;
  cout << cnt << endl;

  return 0;
}
