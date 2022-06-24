#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "masukan angka antara 0 sampai 101: "; cin >> a;
    if (a<101 && a>0){
        for(int i = 1; i <= a; i++){
            cout << i*i  << " ";
        }
        cout << endl;
    }else{
        cout << "angka yang dikasih kelebihan" << endl;
    }
}