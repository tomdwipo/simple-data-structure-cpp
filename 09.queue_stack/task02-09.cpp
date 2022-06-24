#include <iostream>
#include<time.h>
using namespace std;

int randomNumber(int min, int max){
   return rand()%(max-min+1)+min;
}

int main(){
    srand(time(0));
    int n;int k;int j=0;int temp=0;
    do{
        cout<<"masukan jumlah n: ";
        cin>>n;
    } while (n<1 || n>1000);
    do{
        cout<<"masukan jumlah k: ";
        cin>>k;
    } while (k<1 || k>n);
    int nilaiN[n]; 
    int nilaiK[k];
    int result[n];
    for (int i = 0; i < n; i++){
        nilaiN[i] = randomNumber(1,100);
        result[i] = 0;
        cout<<nilaiN[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        if(j<k){ 
            temp = 0;
            nilaiK[j] = nilaiN[i]; 
            j++;
        }
        if(j==k){
            for(int ik = 0;ik<j;ik++){
                temp = temp + nilaiK[ik];
            }
            for(int ik = 0;ik<j-1;ik++){
                nilaiK[ik] =  nilaiK[ik+1];
            }            
            result[i] = temp;
            j=j-1;
        }
    }
    cout<<"hasil: ";
    for (int i = 0; i < n; i++){
        if(result[i] > 0) {
            cout<< result[i] <<" ";
        }
    }
    cout<<endl;
    return 0;
}


