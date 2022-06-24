#include<iostream>
using namespace std;

double powerLoop(double a, double b);
double powerRec(double a, double b);

int main(){
    int a;
    int b;
    cout << "Masukkan nilai a: "; cin >> a;
    cout << "Masukkan nilai b: "; cin >> b;
    cout.precision(100);
    cout << a << " power " << b << " is " << powerLoop(a,b) << endl;
    cout << a << " power " << b << " is " << powerRec(a,b) << endl;

    return 0;
}

double powerLoop(double a, double b){
    if (a<1 || a>50){
        cout<<"Error"<<endl;
        return 0;
    }
    if (b<0 || b>50){
        cout<<"Error"<<endl;
        return 0;
    }
    double result = 1;
    for(double i = 0; i < b; i++){
        result *= a;
    }
    return result;
}

double powerRec(double a, double b){
     if (a<1 || a>50){
        cout<<"Error"<<endl;
        return 0;
    }
    if (b<0 || b>50){
        cout<<"Error"<<endl;
        return 0;
    } 
    if (b == 0){
        return 1;
    }
    return a * powerRec(a, b-1);
}