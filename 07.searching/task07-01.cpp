#include<iostream>
#include<time.h>
using namespace std;

int randomNumber(int min, int max);
int *sortedArray(int array[], int size);
int randomNumber(int min, int max);
int sequentialSearch(int *array, int size, int value);
int binarySearch(int *array, int size, int value);
void showSearch(int *sorted, int totalSize, int value,int SEARCH_NUMBER, bool isBinary);

int main(){
    srand(time(0));

    int SEARCH_NUMBER = 700;

    int totalSize = 1000;
    int number[totalSize];
    for(int i = 0; i<totalSize; i++){
        number[i] = randomNumber(10, 1000);
    }
    int *sorted = sortedArray(number, totalSize);
    showSearch(sorted, totalSize, SEARCH_NUMBER, SEARCH_NUMBER, false);
    showSearch(sorted, totalSize, SEARCH_NUMBER, SEARCH_NUMBER, true);
    cout<<endl;
    return 0;
}

void showSearch(int *sorted, int totalSize, int value,int SEARCH_NUMBER, bool isBinary){
    string title = "";
    int index = -1;
    if (isBinary){
        title = "Binary Search ";
        index = binarySearch(sorted, totalSize, value);
    }else{
        title = "Sequential Search ";
        index = sequentialSearch(sorted, totalSize, value);
    }
    cout<<title<< SEARCH_NUMBER<<": "<<endl;
    if (index == -1){
        cout << SEARCH_NUMBER << " tidak ada" << endl;
    }else{
        cout << SEARCH_NUMBER << " index ke " << index << endl;
    }
}

int *sortedArray(int array[], int size){
    int *sorted = new int[size];
    for(int i = 0; i<size; i++)
        sorted[i] = array[i];
    for(int i = 0; i<size; i++)
        for(int j = 0; j<size-1; j++)
            if(sorted[j]>sorted[j+1]){
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
    return sorted;
}

int sequentialSearch(int *array, int size, int value){
    for(int i = 0; i<size; i++){
        if(array[i] == value)
            return i;
    }
    return -1;
}

int binarySearch(int *array, int size, int value){
    int left = 0;
    int right = size-1;
    while(left<=right){
        int middle = (left+right)/2;
        if(array[middle] == value)
            return middle;
        else if(array[middle] < value)
            left = middle+1;
        else
            right = middle-1;
    }
    return -1;
}

int randomNumber(int min, int max){
    return rand()%(max-min+1)+min;
}