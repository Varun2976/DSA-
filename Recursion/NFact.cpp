#include <iostream>
using namespace std;
int NFact(int n){
    if(n == 0){
        return 1;
    }

    return n * NFact(n-1);
}
int main(){
    int n;
    cout << "Enter the number you wanna find factorial of : ";
    cin >> n;

    cout << "Factorial : " << NFact(n) << endl;
}