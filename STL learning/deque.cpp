#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;
int main(){
    //write like list
    deque<int> d = {1,2,3,4,5};

    for(int val : d){
        cout << val << ' ';
    }
    cout << endl;

    list<int> li = {1,2,3,4,5,6,7};
    deque<int> de = {1,2,3,4,5,6,7};
    //cout << li[2] << endl; if i run this line this will make error, i can't access list by [], list is dubly linked list
    cout << de[2] << endl; //but deque is dynamic array so i can use [] to print values of element by index

    return 0;
}