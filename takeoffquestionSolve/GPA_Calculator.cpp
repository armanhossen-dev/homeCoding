#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<float> ar(n);
    for(int j = 0; j < n; j++){
        cin >> ar[j];
        float sum = 0,num;
        for(int i = 0; i<ar[j]; i++){
            cin >> num;
            sum+=num;
        }
        ar[j] = sum/ar[j];
    }
    for(int l = 0 ; l < n; l++){
        cout <<"Case "<<l+1<<": "<< fixed << setprecision(3) << ar[l] <<endl;
    }
    return 0;
}

//https://toph.co/p/gpa-calculator
//Amazing work! You have solved the problem on first attempt.