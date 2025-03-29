#include<iostream>
#include<vector>

using namespace std;

int main(){
    pair<int, string> ageName = {22, "Arman Hossen"};
    cout <<"Age  : " <<ageName.first << '\n' <<
           "Name : " << ageName.second << endl;

    //experiment :') no it doesn't works, pair only can deal or work with 2 type, 2 values
    ////pair<string, int, char> info = {"Arman", 883, 'N'};
    //but we can do pair inside pair
    pair<int, pair<string, char>> pp = {883, {"Arman Hossen", 'N'}};
    cout << "Hi I am " << pp.second.first <<
        "\nMy id last 3 digit is " << pp.first <<
        "\nMy section is : " << pp.second.second << endl;


    vector<pair <int, int>> vec = {{1,2}, {2,3}, {3,4}, {4,5}};

    vec.push_back({5,6});
    vec.emplace_back(6,7);

    for(pair<int, int> p : vec){
    //for(auto p : vec){ //it works, auto detects the nececery type which should be
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}