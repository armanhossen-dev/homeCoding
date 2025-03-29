//https://toph.co/p/cash-change done
#include<iostream>
using namespace std;

int main(){
    //1, 5, 10, 50, 100, 500.
    int nums[6]={1, 5, 10, 50, 100, 500};
    int count[6]={0,0,0,0,0,0};
    int num,newNum;
    cin >> num;
    newNum = num;
    for(int i = 5; i>=0; i--){
        num = newNum;
        count[i] = num/nums[i];
        newNum = num - (count[i]*nums[i]);
    }

    for(int j = 0; j<6; j++){
        if(count[j]!=0){
            for(int i = 1; i <= count[j]; i++){
                cout << nums[j] << " " ;
            }
        }
    }
    cout << endl;
    return 0;
}