#include<iostream>
#include<cstring>

using namespace std;

//const int N = 2e5+10;
int val[105], wt[105];
long long dp[105][100005]; 

long long func(int idx, int val_left){ 
        
    if(val_left == 0) return 0;  
    if(idx < 0) return  1e15;    
    
    if(dp[idx][val_left] != -1) return dp[idx][val_left];
   
    long long ans = func(idx -1, val_left); 
    if(val_left - val[idx] >= 0){
        ans = min(ans,func(idx -1, val_left - val[idx]) + wt[idx]); 
    }
    return dp[idx][val_left] = ans;
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n, w;
    cin >> n >> w; 

    for(int i = 0; i<n; i++){
        cin >> wt[i] >> val[i]; 
    }
    int max_value = 1e5;
    for(int i = max_value; i >=0; i--){
        if(func(n-1, i)<= w){  
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
