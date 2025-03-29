#include<iostream>
using namespace std;
#include<stack>

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "size fo s :" <<s.size() << endl;
    cout<<"top : " <<s.top() << endl; //4

    //s.pop();

    while(!s.empty()){
        cout<<s.top() << " ";  //prints the top
        s.pop();               //removes the top
    }

    cout << "size fo s :" <<s.size() << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    stack<int> s2;
    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.push(40);
    s2.push(50);

    stack<int> s3;
    s3.swap(s2); // s3 will have s2 elements, and s2 will become empty
    cout << "s2 size : " << s2.size() << endl;  // 0
    cout << "s3 size : " << s3.size() << endl;  // 5

    /* this will not be working 
    for(int val : s){
        cout << val << " ";
    }*/
    return 0;
}