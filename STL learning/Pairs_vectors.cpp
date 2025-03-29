#include <iostream>
#include <utility> // For pair
using namespace std;

int main(){
    pair<int, string> p;   // pair < 1st_datatype, 2nd_datatype > variableName;
    p = make_pair(2, "abc"); 
    
    cout << p.first << " " << p.second << endl; // here p.first = 2, p.second = abc
    
    return 0;
}