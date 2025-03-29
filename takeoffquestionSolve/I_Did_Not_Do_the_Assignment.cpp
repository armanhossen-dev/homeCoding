//https://toph.co/p/i-did-not-do-the-assignment
//I Did Not Do the Assignment

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 2; i<=n; i++){
        if(n%i==0){
            count ++;
        }
    }
    if(count == 1 && n>1){
        //cout << "n is prime "<< endl;
        cout << "NO PUNISHMENT" << endl;
    }else{
        //cout << "n is not prime "<< endl;
        for(int k = 1; k<=n; k++){
            cout << "I DID NOT DO THE ASSIGNMENT." << endl;
        }
    }
    return  0;
}
//Amazing work! You have solved the problem on first attempt.
