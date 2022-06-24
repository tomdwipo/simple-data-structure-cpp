#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "masukan angka antara 0 sampai 1001: "; cin >> n;
    if (n < 0){
        n = -n;
    }
    if (n<1001 && n>0){
        for(int row = 1; row <= n; row++){
            for(int column = 1; column <= n; column++){ 
                if (row==column || row==1 || row==n || column==n || column==1 || column== n-row+1){
                    cout << "*" << " ";
                }else {
                    cout << " " << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }else{
        cout << "angka yang dikasih kelebihan" << endl;
    }
}