#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char>alpha ={'a', 'b' ,'c' ,'d','e'};
    cout << "size = " << alpha.size() << endl; //Gives the size of the vector
    alpha.push_back('f'); //Adds an element at the end of the vector
    alpha.pop_back(); //removes the last element
    
    cout<<"First element in the vector : "<<alpha.front()<<endl; // Prints the first element in the vector
    cout<<"Last element in the vector : "<<alpha.back()<<endl; //Prints the last element in the vector
    cout<<"Element at position 2 : " << alpha.at(2)<<endl;// Prints the element at the specified index

    return 0;
}