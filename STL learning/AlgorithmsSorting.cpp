#include<iostream>
#include<vector>
#include <algorithm>  // For sort()
using namespace std;


bool comparator(pair<int, int> p1, pair<int, int> p2){  // this function for only sort in accending order by second value of pair
    if(p1.second < p2.second) return true;
    else return false;
}

bool comparator2(pair<int, int> p1, pair<int, int> p2){ //this function for sorting pair on basis second value priority but when second value is same then first value sorting in accending order
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first <p2.first) return true;
    else return false;

    
}

int main(){
    
    int arr[5] = {1,3,4,5,2};
    sort(arr, arr + 5);  
    
    //sort(r.begin(), r.end(), greater<int>());
    //sort(r.begin(), r.end()); 
    //sort(r.begin(), r.end(), greater<int>());

    
    cout << "Sorting in Acending order : ";
    for(int val : arr){
        cout << val << ' ';
    }cout << endl; 
    cout << endl; 

    vector<pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vec.begin(), vec.end());

    for(auto p : vec){
        cout<< p.first << ' ' << p.second << endl;
    }
    cout << endl;
    

    vector<int> r = {1,3,4,5,2};
    sort(r.begin(), r.end(), greater<int>()); //decending order
    cout << "Sorting in Decending order : ";
    for(auto i : r){
        cout << i << ' ' ;
    }
    cout << endl;
    cout << endl;

    
    
    //sorting a pair by second value
    vector<pair<int, int>> pa = {{2,3}, {3,1}, {1,1}, {1,0}};
    sort(pa.begin(), pa.end(), comparator);
    
    /*bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    else return false;}  //this function is to be added before main() and then this pair will be sorted in 2nd basis*/
    cout << "comparator\n";
    for(auto p : pa){
        cout << p.first << ' ' << p.second << endl;
    }
    cout << endl;
    cout << endl;
    
    /*
    1 0
    3 1 <-
    1 1 <-
    2 3
    */
   //now i want to sort by second value, but when they are same  then i want to sort by 1st value
   //write a new function then
   cout << "comparator2\n";
   sort(pa.begin(), pa.end(), comparator2);
   for(auto p : pa){
       cout << p.first << ' ' << p.second << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;

    /*
    comparator
    1 0
    3 1 <-
    1 1 <-
    2 3


    comparator2
    1 0
    1 1 <-
    3 1 <-
    2 3
    */

    
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    reverse(v.begin(), v.end()); // this will reverse v vector's elements
    cout << "reverse : ";
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl;
    cout << endl;

    //lets just reverse for some range
    vector<int> v2 = {1,2,3,4,5,6,7,8,9,10};
    for(auto val : v2){
        cout << val << " ";
    }
    cout << endl;
    //i want to rev from 3-7, so index will be 2-6
    reverse(v2.begin()+2, v2.begin()+7);
    //cout << "rev from 3-7, so index will be 2-6 : ";
    for(auto val : v2){
        cout << val << " ";
    }
    /*
    1 2 3 4 5 6 7 8 9 10
    1 2 7 6 5 4 3 8 9 10
        |       |   
    */

    cout << endl;
    cout << endl;
   
    return 0;
}