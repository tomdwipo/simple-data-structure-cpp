#include <iostream>
#include<time.h>
#include<queue>
using namespace std;

int randomNumber(int min, int max){
   return rand()%(max-min+1)+min;
}

int main(){
    srand(time(0));
    queue<int> qu;
     queue<int> quTemp;
    queue<int> quResult;
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
    for (int i = 0; i < n; i++){
        nilaiN[i] = randomNumber(1,100);
        cout<<nilaiN[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        if(qu.size() < k){
            qu.push(nilaiN[i]);
        }
        if(qu.size() == k){
            temp = 0;
            while(!qu.empty()){
                temp = temp + qu.front();
                quTemp.push(qu.front());
                qu.pop();
            }
            quResult.push(temp);
            quTemp.pop();
            while(!quTemp.empty()){
                qu.push(quTemp.front());
                quTemp.pop();
            } 
        }

    }
    cout<<"hasil: ";
    while(!quResult.empty()){
        cout<<quResult.front()<<" ";
        quResult.pop();
    }    
    cout<<endl;
    return 1;
}