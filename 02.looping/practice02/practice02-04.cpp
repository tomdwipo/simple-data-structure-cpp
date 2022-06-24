#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "masukan angka antara 0 sampai 11: "; cin >> a;
    if (a<11 && a>0){
        for(int row = 1; row <= a; row++){
            for(int column = 1; column <= a; column++){ 
                cout << row  << " ";
            }
            cout << endl;
        }
        cout << endl;
    }else{
        cout << "angka yang dikasih kelebihan" << endl;
    }
}