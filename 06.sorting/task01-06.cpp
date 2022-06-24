#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string word0, word1;
    do{
        cout<< "masukan kata 1 (maks 100 karakter): ";cin>>word0;
    } while (word0.size() > 100);
     do{
        cout<< "masukan kata 2 (maks 100 karakter): ";cin>>word1;
    } while (word1.size() > 100);
    sort(word0.begin(), word0.end());
    sort(word1.begin(), word1.end());

    if(word0.length()!=word1.length()){
        cout<<"Tidak"<<endl;
        return 0;
    }

    if (word0==word1){
        cout<<"Ya"<<endl;
        return 0;
    }else{
        cout<<"Tidak"<<endl;
        return 0;
    }
}