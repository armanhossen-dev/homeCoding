#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    cout << min(3,13) << " " << max(3,13) << endl;
    //3 13
    cout << endl;
    cout << endl;

    int a = 5;
    int b = 10;
    swap(a,b);
    cout << "a = "<< a << '\n'
         << "b = "<< b << endl;
        //a = 10
        //b = 5
    cout << endl;
    cout << endl;

    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    //let print the max element of this vector
    cout << *max_element(vec.begin(), vec.end()) << endl; //9
    cout << *min_element(vec.begin(), vec.end()) << endl; //1
    //max_element(vec.begin(), vec.end())  returns an iterator, not the actual maximum value so i have to use * to dereferences the iterator to get the actual value. 
    
    //binary search by function using 'binary_search(v.begin(), v.end(), target);' this will return bool value true or false return kore , target exists or not
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    cout << "does 4 exists in v vector : " << binary_search(v.begin(), v.end(), 4) << endl;
    //bool 1 = true
    //     0 = false


    int n = 15;
    cout << __builtin_popcount(n) << endl; //4
    ///15 banai te koi ta 1 lag te se seta ber kore
    /*
    8 4 2 1
    1 1 1 1
    */
    long int n1 = 15;
    cout << __builtin_popcountl(n1) << endl; //4
    long long int  n3 = 15;
    cout << __builtin_popcountll(n3) << endl; //4
    return 0;
}