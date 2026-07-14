#include <bits/stdc++.h>
using namespace std;
void getPerm(string &s, int index) {


    if (index == s.size()) {

        cout << s << endl;

        return;

    }

    for (int i = index; i < s.size(); i++) {

        swap(s[index], s[i]);          
        getPerm(s, index + 1);         
        swap(s[index], s[i]);         

    }

}
int main(){

    
    return 0;
}