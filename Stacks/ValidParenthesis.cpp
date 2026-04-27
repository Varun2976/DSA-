#include <bits/stdc++.h>
using namespace std;


    
    bool isValid(string s) {
        stack <char> st;

        for(int i = 0 ; i < s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }else{
                if(st.size() == 0){
                    return false;
                }

                if(st.top() == '(' && s[i] == ')' || st.top() == '{' && s[i] == '}' || st.top() == '[' && s[i] == ']'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.size() == 0;
    }

int main(){

    string s;
    cin >> s;

    cout << boolalpha << isValid(s) << endl;
    return 0;
}
