#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"masukan nama anda: "; getline(cin, name);
    for(int i=0; i<name.length();i++){
        if(i>0){
            if(name[i-1]==' '){
                cout<<char(name[i]-32)<<"";
            }else{
                cout<<char(name[i])<<"";
            }
        }
        if (name[0]<123 && name[0]>96 && i==0){
            cout<<char(name[0]-32)<<"";
        }
     }
    cout<<endl;
    return 0;
}