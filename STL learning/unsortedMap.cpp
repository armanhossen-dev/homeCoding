#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m.emplace("tv", 1);
    m.emplace("monitor", 2);
    m.emplace("computer", 3);
    m.emplace("laptop", 4);

    for(auto p : m){
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}

/*
computer 3
laptop 4
monitor 2
tv 1
*/