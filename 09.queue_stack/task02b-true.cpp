#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n+1];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    
    queue<int> q;
    int s = 0;
    
    // masukkan k data pertama, dan hitung jumlahnya
    for (int i=0 ; i<k ; i++){
        s += arr[i];
        q.push(arr[i]);
    }
    // 0 1 2 3 4 5
    // 0 1 2
    //   1 2 3
    cout << s << " ";
    // q = [1,2,3] s = 6
    // s = 6 + 4 - 1 = 9, q = [2,3,4]
    // sliding window
    for (int i=k ; i<n ; i++){
        s += arr[i];
        q.push(arr[i]);
        
        s -= q.front();
        q.pop();
        
        cout << s << " ";
    }
}
