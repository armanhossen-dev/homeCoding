#include<iostream>
#include<map>


using namespace std;

int main(){
    multimap<string,int> multi;
    multi.emplace("tv", 3);
    multi.emplace("tv", 3);
    multi.emplace("tv", 3);
    multi.emplace("tv", 3);
    
    for(auto p : multi){
        cout << p.first << ' ' << p.second << endl;
    }
    //if this was only map then tv will be printed 1 time only
    // because it is multimap so tv is inserted 4 times, so it will be printed 4 times

    multi.erase("tv");
    cout << "after erase : ";
    for(auto p : multi){
        cout << p.first << ' ' << p.second << endl;
    }
    cout << "all value and key is erased\n\n" << endl;

    multi.emplace("camera", 30);
    multi.emplace("camera", 30);
    multi.emplace("camera", 30);
    multi.emplace("camera", 30);
    cout<< "again emplaced key camera :\n";
    for(auto p : multi){
        cout << p.first << ' ' << p.second << endl;
    }
    cout << endl;
    cout << endl;

    cout <<"now clear only one key"<< endl;    
    multi.erase(multi.find("camera"));
    //again print
    for(auto p : multi){
        cout << p.first << ' ' << p.second << endl;
    }

    
    return 0;
}