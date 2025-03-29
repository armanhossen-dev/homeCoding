#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;
    //m["productName"] = Price;
    m["tv"] = 30000;
    m["laptop"] = 100000;
    m["cycle"] = 12000;
    m["monitor"] = 11700;

    m.insert({"camera", 23000});
    m.emplace("phone", 20000);
    
    m.erase("monitor"); // monotor will be romved or deleted from map



    int totalCost = 0;
    for(auto p : m){
        cout << p.first << ' ' << p.second << endl;
        totalCost += p.second;
    }
    /*
    camera 23000
    cycle 12000
    laptop 100000
    monitor 11700
    phone 20000
    tv 30000
    output printed in sorted way, alphabeticaly ascending order, lexiographoical way
    */
    //cout << '\n' << "Total Cost : " << totalCost << endl;
    cout << endl;

    cout << "count = " << m.count("laptop") << endl; // counts key laptop how much time is there
    cout << "Price of cycle = " << m["cycle"] << endl;

    if(m.find("camera") != m.end()){
        cout << "found\n";
    }else{
        cout << "not found\n";
    }


    return 0;
}