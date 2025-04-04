#include<iostream>
#include<cstring>

using namespace std;
const int N = 2e5+10;
int val[105], wt[105];

long long dp[105][100005]; 


long long func(int idx, int wt_left){ 
    
    if(wt_left == 0) return 0; 
    if(idx < 0) return 0; 

    if(dp[idx][wt_left] != -1) return dp[idx][wt_left];
    long long ans = func(idx -1, wt_left);

    if(wt_left - wt[idx] >= 0){
        ans = max(ans, func(idx -1, wt_left - wt[idx])+val[idx]);
    }
    return dp[idx][wt_left] = ans;
}


int main(){
  
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w; 

    for(int i = 0; i<n; i++){
        cin >> wt[i] >> val[i]; 
    }
    
    cout << func(n-1, w); 
}