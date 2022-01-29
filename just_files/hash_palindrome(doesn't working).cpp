#include <bits/stdc++.h>
//#include <sstream>
#define int long long

using namespace std;
const int inf = 1e9+7;
bool check(vector<int> h, vector<int> rev_h, vector<int> p_pow, int l,int r){
  /*int getHash = h[r];
  int getRevHash = rev_h[l];
  if(l>0) getHash -=h[l-1];
  if(r>h.size()-1) getRevHash -= rev_h[r+1];
  int first = getHash*p_pow[h.size()-r-1];
  int second = getRevHash * p_pow[l+1];
  //cout<<getHash<<' '<<getRevHash<<' '<<r<<' '<<endl;
  //cout<<l<<endl;
  return first == second;*/
  //int first = (h[l]-h[r-1])*p_pow[h.size()-l-1];
  
  
  return 0;
}

signed main()
{
  /*
  7
  dabbacc
  */
  int n;
  string s, rev_s;
  cin>>n;
  cin>>rev_s;
  s = rev_s;
  reverse(rev_s.begin(),rev_s.end());
  const int p = 31;
  vector <int> p_pow (n);
  p_pow[0] = 1;
  vector<int> h (n);
  vector<int> rev_h(n);
  for(int i = 0;i<n;i++){
    if(i) p_pow[i] = p_pow[i-1]*p;
    
    h[i] = (s[i] - 'a'+ 1 )*p_pow[i];
    rev_h[i] = (rev_s[i] -'a' + 1)*p_pow[i];
    if(i) {
      h[i]+=h[i-1];
      rev_h[i] += rev_h[i-1];
      
    }
    h[i] = h[i]%inf;
    rev_h[i] = rev_h[i]%inf;
    cout<<h[i]<<' '<<rev_h[i]<<' '<<i<<endl;
  }

  vector<int> odd_c(n);
  vector<int> even_c(n);
  for(int i = 0;i<n;i++){
    int l = 1;
    int r = min(i+1,n-i);
    while(l<=r){
      int m = (l+r)/2;
      if(check(h, rev_h, p_pow, i-m+1,i+m-1)){
        odd_c[i] = m;
        l = m+1;
      }
      else{
        r = m-1;
      }
    }
  }
  for(int i = 0;i<n;i++){
    int l = 1;
    int r = min(i,n-i);
    while(l<=r){
      int m = (l+r)/2;
      if(check(h,rev_h,p_pow,i-m,i+m-1)){
        even_c[i] = m;
        l=m+1;
      }
      else{
        r=m-1;
      }
    }
  }
  int best = 0;
  for(int i = 0;i<n;i++){
    best = max(best,max(2*odd_c[i]-1, 2*even_c[i]));
  }
  cout<<best<<endl;
  return 0;
}
