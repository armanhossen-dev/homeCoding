#include<iostream>
#include<cstring>

//#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10; //making a big size value for N, and then using N as size of dp array to store value

///what is dp 
//making solve of problems with less time complexity, saving every step value in a array , and using that to fill the value from that array if the step is again done 
int dp[N];

///as example fibonacci number calculate
//fibonacci 0 1 1 2 3 5 ,next nubmer by calculating prev 2 numbers sum
//we have to op the nth fibonacci number
//0 1 1 2 3 5 8 . . . fib series but first fib number is 1, 2nd is 1, 3rd is 2, 4th is 3, 5th is 5 , 6th is 8, not starts form 0 , but fib series starts form 0 1 1 2 3 5 8 13 ...
//fun(n) -> nth fib number return kor be


//TOP DOWN APPROACH
//function using recursion
int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n]; // dp[n] if calculated then its value will not be -1
    //this is called memoise ' if(dp[n] != -1) return dp[n];' 
    return dp[n] = fib(n-1) + fib(n-2);  //each time the fib function runs the dp[n] gets a new value form = "fib(n-1) + fib(n-2)" and saved it in dp[n] also return
}

//find the time complexity of recursion, joto bar funciton call hoi te se, and every time funtion er time complexity 
/*
tree will form                                                                                   BST er tree er  every level er node number
fib(5) -------------------------------------------------------------------------------------------------------1
fib(5) = fib(5) -> fib(4), fib(3)-----------------------------------------------------------------------------2
fib(4) = fib(3),fib(2) ,,,,,,,,,,,, fib(3) = fib(2),fib(1)----------------------------------------------------4
fib(3) = fib(2), fib(1),,,,, fib(2) = fib(1),fib(0) ,,,,,,,,,,,,,,,,fib(2) = fib(1),fib(0),,, fib(1) =  1-----8ta hoi but 6 ta pai si tree er node or function
fib(2)->-----------, fib(1)-> 1, ,,,,,,fib(2)-----------------------------------------------------------------16 ta hoi but amra 2 ta pai si


emne total time complexity = 2^(n+1) pabo or 2^n er kasa kasi, tai fib 20th kuje ber kor te timecomplexity onek besi hoi jai bo

ei time complexity komai te dp use hoi, fib(2) er value save kore rak bo, tale pore fib(2) er jonne full cal kor te hobe na, ei vabe sob step er val store kore bo,

ei val gula je array te save kor bo seta dp array te rak bo, 
by uing dp array we have minimize the number of function call
now time complexity is O(2^N) --> O(N)


so generaly dp makes O(something ^ exponentioal power) or O(x^N) -becomes-> O(N)

factorial tc o(N!) -using dp-> o(2^N)
*/

int main(){
    //dp array er every unused element er value -1 kor e rak bo
    memset(dp, -1, sizeof(dp)); //if dp[i] == -1, then i er jonne value calculate kora hoi ni //memset(arrayName, -1, sizeof(arrayName)); , value -1 er jnne kaj kore, or onno value use na kora valo
    int n;
    cin >> n;

    /*
    BOTTOM UP Approach
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2;  i <=2; ++i){
        dp[i] = dp[i-1] + dp[i-2];
    }
    */

    cout << fib(n) << endl;
    return 0;
}