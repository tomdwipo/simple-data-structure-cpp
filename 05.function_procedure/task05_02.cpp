#include<iostream>
using namespace std;

string isPalindromeLoop(string str);
string isPalindromeRec(string str);

int main(){
    string text;
    cout << "Masukkan 1 kata: "; cin >> text;
    cout << text << " merupakan " << isPalindromeLoop(text) << endl;
    cout << text << " merupakan " << isPalindromeRec(text) << endl;

    return 0;
}

string isPalindromeLoop(string str){
    int i = 0;
    int j = str.length()-1;
    while(i<j){
        if(str[i] != str[j]){
            return "Bukan Palindrome";
        }
        i++;
        j--;
    }
    return "Palindrome";
}

string isPalindromeRec(string str){
    if(str.length() == 1){
        return "Palindrome";
    }
    if(str[0] == str[str.length()-1]){
        return isPalindromeRec(str.substr(1, str.length()-2));
    }
    return "Bukan Palindrome";
}

