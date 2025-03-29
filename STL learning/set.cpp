#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    set<int> s;
    cout << "for set :\n";
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    
    s.insert(1); //this dublicate values will not be added
    s.insert(2);
    s.insert(3);
    
    for(int k : s){
        cout << k << ' ';
    }
    cout << endl;
    cout << "lower bound : " << *(s.lower_bound(4)) << endl; //4, 4 jodi set e na tak to , tahole 5 ans hoi to
    cout << "upper bound : " << *(s.upper_bound(4)) << endl; //5 , upper bound er jonne value key er teke besi hobe
    cout<< "set size : "<< s.size() << endl; //5
    cout << endl;
    cout << endl;

    //multiset
    multiset<int> s1;
    cout << "for multiset :\n";
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    
    s1.insert(1); //this dublicate values will be added bcz multiset
    s1.insert(2);
    s1.insert(3);

    for(auto val : s1){
        cout << val << ' ';
    }
    cout << endl;
    //1 1 2 2 3 3 4 5 

    cout << endl;
    cout << endl;


    //unordered set
    unordered_set<int> s2;
    cout << "for unordered set :\n";
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    s2.insert(4);
    s2.insert(5);
    
    s2.insert(1); //this dublicate values will be not added bcz unordered
    s2.insert(2);
    s2.insert(3);
    //here is not sure that the elements will be sorted or not
    //some times looking decending or ascending but most of the time it will not be sure , so unordered set

    for(auto v : s2){
        cout << v << ' ';
    }
    cout << endl;
    //5 1 2 3 4 

    cout << endl;
    cout << endl;



    
    return 0;
}