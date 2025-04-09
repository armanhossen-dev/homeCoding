#include<bits/stdc++.h>
using namespace std;

#define f_loop_inc(i, start, end) for(int i = start; i <= end; ++i)
#define f_loop_dec(i, start, end) for(int i = start; i >= end; --i)

int main(){
    int start, end;
    printf("Enter start and end : ");
    scanf("%d", &start);
    scanf("%d", &end);
    
    //scanf makes a newline after taking info or input, so after it , if we take input then the enter makes that unable to input, so , we use, cin.ignore(); to ignore that input buffer
    cin.ignore();  // <-- This line clears the leftover newline

    cout << "What do you want to print ?" << endl;
    string print;
    //cin >> print ; // it only takes a word not  full sentence
    getline(cin, print);

    cout << "using f_loop_inc" << endl;
    f_loop_inc(i, start, end){
        cout << i << " " + print << endl;
    }

    cout << endl;
    cout << "using f_loop_dec" << endl;
    f_loop_dec(i, end, start){
        cout << i << ' ' + print << endl;
    }
    
    return 0;
}
