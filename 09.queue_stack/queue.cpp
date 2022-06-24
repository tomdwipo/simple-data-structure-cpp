#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    
    cout << "Elemen paling depan: " << q.front() << endl;
    cout << "Elemen paling belakang: " << q.back() << endl;
    q.pop();
    cout << "Elemen paling depan setelah pop: " << q.front() << endl;
    cout << "Elemen paling belakang setelah pop: " << q.back() << endl;
    
    q.push(1);
    q.push(3);
    q.push(10);
    q.push(4);
    
    while (!q.empty()){
        cout << ' ' << q.front();
        q.pop();
    }
}
