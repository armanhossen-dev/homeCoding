#include<iostream>
#include<vector>
#include<list>
using namespace std;


int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);

    for(int j : l){
        cout << j  << " ";
    }
    //output : 6 5 4 1 2 3 
    cout << endl;
    
    l.pop_back(); // back right side , 1 element will be deleted , 3 will be deleted
    l.pop_front(); // from the left side, 6 will be deleted
    //remain 5 4 1 2
    cout << "After pop_back and pop_front : \n";
    for(int j : l){
        cout << j << ' ';
    }
    cout << endl;

    //initialize list with values
    list<int> l1 = {10,20,30,40};
    
    return 0;
}