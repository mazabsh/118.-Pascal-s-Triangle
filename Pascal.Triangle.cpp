#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
vector<vector<int>> generate(int numRows){
  vector<vector<int>> res(numRows); 
  for(int i=0; i<numRows; ++i){
    res[i].resize(i+1,1); 
    for(int j=1; j<i; ++j) res[i][j] = res[i-1][j-1]+res[i-1][j]; 
  }
  return res; 
}
};
int main(){
  int numRows = 5; 
  Solution sol; 
  vector<vector<int>> res = sol.generate(numRows); 
  for(auto vec:res){
    cout << "[" ; 
    for(int n:vec) cout << n << "," ; 
    cout << "]"; 
  }
  return 0; 
}
