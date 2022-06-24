#include <iostream>
using namespace std;
int main(){
     unsigned long long a;
    cout << "masukan angka antara 0 sampai 1.000.001: "; cin >> a;
    if (a<1000001 && a>0){
        for(  unsigned long long i = a; i > 0; i--){
              if (i*i>=a) {
                continue;
            }
            cout << i*i  << " ";
        }
        cout << endl;
    }else{
        cout << "angka yang dikasih kelebihan" << endl;
    }
}