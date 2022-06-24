#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
   cout << "angka a: ";
    cin >> a;
    cout << "angka b: ";
    cin >> b;
    cout << "angka c: ";
    cin >> c;
    
    if(a < b){
        a = a + b;
        b = a - b; 
        a = a - b; 
        if (a < c){ 
            a = a + c; 
            c = a - c; 
            a = a - c; 
        }
         if (b < c){
            b = b + c;
            c = b - c;
            b = b - c;
        }
    }else if(b < c){
        b = b + c;
        c = b - c;
        b = b - c;
        if(a < b){
            a = a + b;
            b = a - b;
            a = a - b;
        }
    }

    
    cout << "nilai terbesar ke kecil: " << a << " " << b << " " << c << endl;

    return 0;
}

