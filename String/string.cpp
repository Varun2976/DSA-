#include <iostream>
#include <string>  
using namespace std;

int main (){
    char str[12] ;

    cout << "Enter an input string : ";
    cin.getline(str, 12);

    cout << strlen(str);
    cout << str << endl;
    return 0;
}