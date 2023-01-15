#include <bits/stdc++.h>
using namespace std;
int sumofArr(vector<int> v){
    int ans = 0;
    for (auto it : v)   ans+=it;
    return ans;
}
bool isprime(int t){
    bool flag = 1;
    for (int i = 2; i*i < t; i++) {
        if (i%t == 0)
            flag = 0;
    }
    return flag;
}
int maxElem(std::vector<int> a){
    std::sort(a.begin(), a.end());
    return a[a.size()-1];
}
int minElem(std::vector<int> a){
    std::sort(a.begin(), a.end());
    return a[0];
}
int32_t main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL) ;
  cout.tie(NULL);
 cout<<"Hello World , welcome to the programming zone.."; 
  return 0;
}