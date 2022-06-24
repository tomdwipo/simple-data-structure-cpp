#include<iostream>
using namespace std;
int random(int min, int max);
int main(){
    int n;
    int tempMaximumNumberOfOneNumber=0;
    int maximumNumberOfOneNumber=0;
    cout << "masukan nilai n (1 <= n <= 10.000): "; cin >> n;
    int arrayOfNumbers[n];
    if (n < 1 || n > 10000) {
        cout << "nilai n tidak valid" << endl;
        return 0;
    }
    for(int i=0; i<n; i++){
        int a = random(0, 1);
        arrayOfNumbers[i] = a;
    }
    for(int i=0; i<n; i++){
        if(arrayOfNumbers[i] == 1){
            tempMaximumNumberOfOneNumber++;
            if(tempMaximumNumberOfOneNumber > maximumNumberOfOneNumber){
                maximumNumberOfOneNumber = tempMaximumNumberOfOneNumber;
            }
        }else{
            tempMaximumNumberOfOneNumber = 0;
        }
        cout << arrayOfNumbers[i] << " ";
    }
    cout << endl;
    cout<< "total angka 1 terpanjang adalah "<< maximumNumberOfOneNumber << endl;
    return 0;
 }
int random(int min, int max){
    return rand() % (max - min + 1) + min;
}