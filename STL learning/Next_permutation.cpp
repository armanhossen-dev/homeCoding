#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s = "abcde";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
    //abced

 /*
 abc 
 - abc
 - acb 
 - bac 
 - bca 
 - cab
 - cba
 */
 string s1 = "bca";
 prev_permutation(s1.begin(), s1.end());
 cout << s1 << endl; //bac

 //fun fact now check for my names
 string name1 = "arman";
 string name2 = "hossen";
 string name3 = "ripon";

 cout << "next_permutation of my names :\n";
 next_permutation(name1.begin(), name1.end());
 cout << name1 << endl;

 next_permutation(name2.begin(), name2.end());
 cout << name2 << endl;

 next_permutation(name3.begin(), name3.end());
 cout << name3 << endl;

/*
armna 
hossne
rniop
*/
 string name11 = "arman";
 string name22 = "hossen";
 string name33 = "ripon";
 
 cout << "prev_permutation of my names :\n";
 prev_permutation(name11.begin(), name11.end());
 cout << name11 << endl;

 prev_permutation(name22.begin(), name22.end());
 cout << name22 << endl;

 prev_permutation(name33.begin(), name33.end());
 cout << name33 << endl;
/*
aranm
hosnse
ripno
*/

    return 0;
}