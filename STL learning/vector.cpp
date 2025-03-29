#include<iostream>
    #include<vector>
    using namespace std;

    int main(){
        vector<int> vec; //initial e kono vector declare kor le er size zero ta-ke,
        cout << vec.size() << endl; // 0
        
        //push_back to add any new element at the last of vec array
        //push_back er moto kaj kore emplace_back
        
        
        vec.push_back(1); //1 value/data added in vec variable, and the size is now 1
        //cout << vec.size() << endl; // size 1
        vec.push_back(2);
        vec.push_back(3);
        //size & capacity -- size : the number of elements that are stored in vector, capacity:each level the capaciy goes double , 
        //[1] - level 1 , only declared a vector and then assign or push_back data 1
        //[1][2] - level 2, the capacity is 2, now the previous data 1 is copied and '2' is added
        //[1][2][3][] - level 3, the capacity is 4, now the previous data 1,2 is copied and 3  is added, and one more memory space is remaining, 
       
        cout << vec.capacity() << endl; //4
         //size is how many data is in the vector, 
         //capacity is how many data there can be stored
        vec.push_back(4);
        vec.emplace_back(5);

        //to print or go through every data or elements we use for each loop
        for(int val : vec){
            cout << val << " " ;
        }
        cout << endl;
        //pop_back will delete from the last
        vec.pop_back(); //this will delete the last element 5
        for(int j : vec){
            cout << j << " ";
        }

        //access any element of vector by vec[index], or vec.at(index);
        cout <<"\nvalue of idx 2 = " << vec.at(2) << " or "<<vec[2] << endl;

        cout << "front element: "<< vec.front() << endl;
        cout << "back element: "<< vec.back() << endl;

        //to declare an array vector initialization
        vector<int> vec1 = {1,2,3,4,5,6};

        vector<int> vec2(3,10); //3 is the size, and 10 will be the value alll the value, so there will be '10 10 10'

        vector<int> vec3(vec1);
        for(int j : vec3){
            cout << j << " "; //it shows the elements of vec1, 
        }

        cout << endl ;
        cout << endl ;
        
        //https://youtu.be/okhdtEk1iKk?si=ICI85Uu6KEpvXPqU

        //we want to delete/ erase the position of idx 0
        vector<int> vec4 = {10,20,30,40};
        for(int i4: vec4){
            cout << i4 << " ";
        }
        vec4.erase(vec4.begin());

        cout<< "\nAfter deleting 0 index\n";
        for(int i4: vec4){
            cout << i4 << " ";
        }
        
        //vecVariable.erase(vecVariable.begin()+indexNumber);
        //lets delete idx 2 variable
        vec4.erase(vec4.begin()+2); //now the elements are 20 30 40, so index 2 will be 40
        
        cout<< "\nAfter deleting 2 index\n";
        for(int i4: vec4){
            cout << i4 << " ";
        }
        cout << endl;
        cout << endl;


        cout << "erase multiple elements from a vector : \n";
        //aksate onek gula delete kor te par bo, akta range dia dibo, vec.erase(start,end) emon
        vector<int> vec5 = {21,22,23,24,25,26,27,28,29,30};
        //            idx=  0  1  2  3  4  5  6  7  8   9
        for(int iy: vec5){
            cout << iy << " ";
        }
        cout << endl;
        //now i want to delete from idx 2 to 6 , so i will start from index 2, end in idx 7, this will delete to 6
        vec5.erase(vec5.begin()+2, vec5.begin()+7); //now remaining will be
        for(int iy: vec5){                          //21,22,28,29,30
            cout << iy << " ";
        }
        cout << endl;
        cout << endl;




        //use of insert function , and inserting element in any position
        vector<int> vec6 = {10,20,30,40,50,60,70};
        for(int iy: vec6){
            cout << iy << " ";
        }
        cout << endl;
        //suppose we want to insert value 200 after 20, the target index  is 2, there is now 3, 
        vec6.insert(vec6.begin()+2, 200);
        //10 20 30 40 50 60 70
        //10 20 200 30 40 50 60 70
        for(int iy: vec6){
            cout << iy << " ";
        }
        cout << endl;
        cout << endl;


        //clear function in vector, vec.clear(); this will clear the entire vector
        vector<int> vec7 = { 4,5,6,7,8};
        cout << "Before clear : \n";
        //cout <<"capacity of vec7 : " <<vec7.capacity() << endl; //5
        //cout <<"size of vec7 : " <<vec7.size() << endl;         //5
        for(int k : vec7){
            cout << k << " ";
        }
        cout << endl;
        vec7.clear();
        //this clears all elements but the capacity remains same
        //now again print that bot no output will be
        cout<< "After clear : ";
        for(int k : vec7){
            cout << k << " ";
        }
        cout << endl;
        cout <<"capacity of vec7 : " <<vec7.capacity() << endl;
        cout <<"size of vec7 : " <<vec7.size() << endl;

        //check now the vec7 is empty or not
        cout << "is empty : " << vec7.empty() << endl;

        //vec7.empty() = 1 ture
        //vec7.empty() = 0 false
        cout << endl;
        cout << endl;
        

        //vector iterators
        vector<int> vec8 = {1,2,3,4,5};
        cout<< "let me show the value of vec8 : ";
        for(int v : vec8){ cout << v << " ";}  cout << endl;
        cout << "vec8.begin : " << *(vec8.begin()) << endl;
        cout << "vec8.end : " << *(vec8.end()) << endl;
        cout << "vec8.end -1 : " << *(vec8.end()-1) << endl;

        cout << endl;
        cout << endl;
        //loop using iterators , and dereferencing them to print the values
        //let me use vec8
        
        
        vector<int>::iterator i;
        cout << "using iterator and printing vec8\n";
        //i can also use auto in for loop to define i, and then don't have to write this "vector<int>::iterator i;"
        for(i = vec8.begin(); i!=vec8.end(); i++){
            cout << *(i) << " ";
        }
        cout << endl;
        cout << "now print in reverse\n";
        //vector<int>::reverse_iterator ir;
        //for(ir = vec8.rbegin(); ir!=vec8.rend(); ir++){
        //or i can use auto to define 'ir'
        for(auto ir = vec8.rbegin(); ir!=vec8.rend(); ir++){
            cout << *(ir) << " ";
        }
        cout << endl;

        return 0;
    }