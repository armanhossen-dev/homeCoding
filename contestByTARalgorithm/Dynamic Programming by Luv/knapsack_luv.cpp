//0-1  knapsack 
//sum of wt to make a target wt, and find max value

/*
1≤N≤100
1≤W≤10^5
1≤wi≤W
1≤wi≤W
1≤vi≤10^9
1≤vi≤10^9
https://vjudge.net/contest/700490#problem/A
*/


#include<iostream>
#include<cstring>

using namespace std;
const int N = 2e5+10;
int val[105], wt[105];

long long dp[105][100005]; //dp er value jeta show kor bo oi tau long long


//we will start form the back or last item to first item, to idx will start form the last
//2 choices, from back or last item, we willl consider if we take that item then its weight willl be minus form to total and the val for item willl be sum added, then if we dont take that item then we will consider for the left side all other idx items, take them or not , if take then minus weight form the main, and add value, if not take then do nothing, search in the left side elements of the array 

long long func(int idx, int wt_left){ //here 2 things will be changing , idx, wt_left, so it will be 2D dp to store the ans
    
    if(wt_left == 0) return 0; //while the wt_left is zero, then func will return 0, then while finding the max , we will find the max value
    if(idx < 0) return 0; //if idx is less than zero, then no item left

    
    if(dp[idx][wt_left] != -1) return dp[idx][wt_left];
    
    
    
    //func(idx -1, wt_left);  //case1, if we dont take the idx item then do this
    //func(idx-1, wt_left - wt[idx])+val[idx];    //case2, if we take that idx item, then we will search the remain weight in the "idx-1", and the idx items weight will be minus so , wt_left - wt[idx], but the value of idx item will be sum with the result of func function, so + val[idx];
       
    //now for both choices or case finding the max value we can get    
    //ans willl be / range is  10^9 so using long long 
    long long ans = func(idx -1, wt_left);
    
    //making the weight left positive of = 0 not negative
    if(wt_left - wt[idx] >= 0){
        ans = max(ans, func(idx -1, wt_left - wt[idx])+val[idx]);
    }
    //return ans; it works but we use dp output waaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    return dp[idx][wt_left] = ans;
}


int main(){

    //filling all elemets to -1 in dp[][]
    memset(dp, -1, sizeof(dp));

    int n, w;
    cin >> n >> w; //n = number of items, w = total weight we have to find for total w what will be the max n items value

    for(int i = 0; i<n; i++){
        cin >> wt[i] >> val[i]; //weight of item, and  value for  that item
    }
    //int func(int idx, int wt_left) this for remembering the func functions parameter
    cout << func(n-1, w); //n-1 idx por jonto kuj be, and for total w
}