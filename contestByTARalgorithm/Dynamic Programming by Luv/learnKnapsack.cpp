//dp[n][w] = max(dp[n-1][w], dp[n-1][w-wt[n]]+ val[n])
//#include"bits/stdc++.h"
#include<iostream>
using namespace std;
#include<vector>

/*
#define vi vector<int>
#define vvi vector<int>
#define pii vector<int, int>
#define vii vector<pii>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
*/

#define rep(i,a,b) for(int i = a; i<b; i++)
const int N = 1e3+2, MOD = 1e9+7;
int val[N], wt[N]; //value and weight er jonnne array create

int dp[N][N];
int knapsack(int n, int w){

    if(w <= 0){
        return 0;
    }

    if(n <= 0){
        return 0;
    }

    if(dp[n][w] != -1){
        return dp[n][w];
    }

    if(wt[n-1] > w){  
        //return knapsack(n-1, w);
        dp[n][w] = knapsack(n-1, w);
    }else{
        dp[n][w] = max(knapsack(n-1, w), knapsack(n-1, w-wt[n-1])+val[n-1]);
    }
    //return max(knapsack(n-1, w), knapsack(n-1, w-wt[n-1])+val[n-1]);
    return dp[n][w];
}


signed main(){
    
    //dp[i][j], i = j = N , matrix er sob element  = -1 korlam
    rep(i,0,N){
      rep(j, 0, N) {
        dp[i][j] = -1;
      }
    }
    
    int n; // number of items
    cin >> n;

    rep(i,0,n){
        cin >> wt[i];
        //loop calai lam and wt(weigth) gula nilam
    } 
    
    rep(i,0,n){
        cin >> val[i];
        //loop calai lam and val gula nilam
    }

    int w; //weight 
    cin >> w; //target weight

    cout << knapsack(n,w) << endl; //ans of total value i can get

    return 0;
}
//siklam but 60% bujisi full buji nai
//concept bujlam but code e buj lam na apna collge er
