//Knapsack 2
//sum of values to make a target value, find minimum wt to to do this
/*
item wt     2    3  4
wt value    5    6  11
target value 11
min wt to fill target value 11

we can make 4wt to make 11 val
we also can make 2+3wt to make 11 val
https://vjudge.net/contest/700490#problem/D
D - D

1≤N≤100
1≤W≤10^9
1≤wi≤W
1≤vi≤10^3

*/

#include<iostream>
#include<cstring>

using namespace std;
const int N = 2e5+10;
int val[105], wt[105];

long long dp[105][100005]; 


long long func(int idx, int val_left){ //this funciton to find minimum wt for idx, and value
    
    //value fill hoise, ar find kor te hobe na tokon,
    if(val_left == 0) return 0;  //func(idx, 0)
    if(idx < 0) return  1e15;    //func(-1, amount) undefined value return kor bo, karon min value amra find kor te si, 
    

    if(dp[idx][val_left] != -1) return dp[idx][val_left];
        
    //main story 
    //func(idx -1, val_left); //dont choose
    //func(idx -1, val_left - val[idx]) + wt[idx]; //if choose

    long long ans = func(idx -1, val_left); 
    if(val_left - val[idx] >= 0){
        ans = min(ans,func(idx -1, val_left - val[idx]) + wt[idx]); //ei part tokon e declare kor bo jokon, "val_left - val[idx]" ei part greater than zero hobe
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
        if(func(n-1, i)<= w){  //func(n-1, i) this function will make a i for idx n-1, and if the min w to find this is <= w, the weight we are targeting to find , for which w we have to find the min value we can get, then i is the min value we can get, so we print i as the min value, 
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
