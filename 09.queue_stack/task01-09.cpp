#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    string content;
    do{
        cout << "masukan contoh content(max: 1000 char): ";
        getline(cin, content);
    } while (content.size() > 1000);
    for (int i = 0; i < content.size(); i++){
        if(st.empty() && content[i] == ')'){
            cout<<"tidak valid"<<endl;
            return 0;
        }
        if (content[i] == '('){
            st.push(content[i]); 
        }else if (content[i]==')'){
            if(st.top() == '('){
                st.pop();
            }
        }
    }
    if(st.empty()){
        cout<<"valid"<<endl;
    }else{
        cout<<"tidak valid"<<endl;
    }    
}
