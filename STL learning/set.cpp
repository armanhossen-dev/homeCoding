#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);
    
    cout<< "set size : "<< s.size() << endl;
    for(int k : s){
        cout << k << ' ';
    }
    cout << endl;
    
    return 0;
}