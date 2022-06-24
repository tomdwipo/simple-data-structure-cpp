#include <iostream>
using namespace std;
int main(){
    int a, p;
    cout << "masukan angka antara 0 sampai 1001: "; cin >> a;
   cout << "masukan pembagi antara 0 sampai 1001: "; cin >> p;
    if (a<1001 && a>0){
        for(int i = 1; i <= a; i++){
            if (i%p==0){
                cout << "hai" << " ";
            }else{
                cout << i << " ";
            }
        }
        cout << endl;
    }else{
        cout << "angka yang dikasih kelebihan" << endl;
    }
}