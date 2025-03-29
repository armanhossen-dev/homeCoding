#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << "Before : size : " << q.size() << endl;
    while(!q.empty()){
        cout<< q.front() << ' ';
        q.pop();      
    }
    cout << endl;
    cout << "After : size : " << q.size() << endl;
     
    queue<int> qw;
    qw.push(10);
    qw.push(20);
    qw.push(30);
    qw.push(40);

    queue<int> nq;
    nq.swap(qw);  // qw er elements nq er vitore swap kore cole gese, and qw empty hoise, size zero hio se

    cout<< "size nq : "<< nq.size()  << endl; //4
    cout<< "size qw : "<< qw.size() << endl; //0
    
    return 0;
}