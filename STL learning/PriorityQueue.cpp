#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while(!q.empty()){
        cout << q.top() << ' '; 
        q.pop();
    }
    cout << endl;
    //10 5 4 3 
    
    
    //to have acending order
    priority_queue<int, vector<int>, greater<int>> q2;
    q2.push(5);
    q2.push(3);
    q2.push(10);
    q2.push(4);

    while(!q2.empty()){
        cout << q2.top() << ' '; 
        q2.pop();
    }
    cout << endl;
    //3 4 5 10 

    return 0;
}