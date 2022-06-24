#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(100);
    st.push(200);
    
    cout << "Elemen paling atas: " << st.top() << endl;
    st.pop();
    cout << "Elemen paling atas setelah pop: " << st.top() << endl;
    
    cout << "Apakah stack saat ini kosong? " << st.empty() << endl;
    st.pop();
    cout << "Apakah stack saat ini kosong setelah pop? " << st.empty() << endl;
    cout << "=====================" << endl;
    st.push(1);
    st.push(4);
    st.push(3);
    st.push(10);
    st.push(2);
    while (!st.empty()) {
        cout << ' ' << st.top();
        st.pop();
    }
}
