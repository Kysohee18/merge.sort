#include <iostream>
#include <string>
using namespace std;
int arr[20], B[20]

void input() {
    while(true){
        cout << "masukkan panjang  element array:";
        cin >> n;

        if(n<=20){
            break;
        }
        else {
            cout <<\"nMaksimal panjang array adalah 20";
        }
    }



    cout << "\n====================";
    cout << "\nInputkan Isi Element";
    cout << "\=====================" <<endl;

    for (int i = o; i < n; i++) {
        cout <<"array index ke -" << i << ":";
        cin >> arr[i];
    }
}

void MergeSort(int low, int high) {
    if (low >= high) { //step1 
        return;      //step 2

    }
    
    int mid = (low + high)/2; //step 2

    //step 3
    // fungsi rekursi
    MergeSort(low, mid); //step 3.a
    MergeSort(mid +1, high); //step 3.b

    //step 4
    int i = low; // step 4.a
    int j = mid + 1; //step 4.b
    int k = low; //step 4.c

    while (i <= mid && j <= high) { //step 4d
        if (arr[i] <= arr [j]) {
            B[k] = arr[i];
            i++;
        } else { //step 4.d.ii
            B[K] = arr [j];
            j++;
            
        }
        

    }
    while (j <= high) { //step 4e
        B[K] = arr[j]; //step.4.e.i
        j++;
        k++;
    }
    while(i <=mid){
        B[k] = arr[i];
        i++;
        k++;
    }
    for(int i = low; i <= high; i++){
        arr[i] = B[i];
    }
}

int main(){
    cout << "\n=================";
    cout << "\nProgram merge sort";
    cout << "\n=================";
    
    input();
    MergeSort(0, n-1);
    output();

    return 0;



}
