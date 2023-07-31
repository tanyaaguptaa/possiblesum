
#include<bits/stdc++.h>

using namespace std;
    void subsetSum(int ind, vector < int > & arr, int n, vector < int > & ans, int sum) {
      if (ind == n) {
        ans.push_back(sum);
        return;
      }
      
      subsetSum(ind + 1, arr, n, ans, sum + arr[ind]);
     
      subsetSum(ind + 1, arr, n, ans, sum);
    }
  vector< int >subsetSums(vector < int > arr, int n) {
    vector < int > ans;
    subsetSum(0, arr, n, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
  }


int main() {
  vector < int > arr{3,1,2};
  vector < int > ans = subsetSums(arr, arr.size());
  sort(ans.begin(), ans.end());
  cout<<"The sum of each subset is "<<endl;
  for (auto sum: ans) {
    cout << sum << " ";
  }
  cout << endl;

  return 0;
}
