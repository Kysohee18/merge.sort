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

void MergerSort(int low, int high) {
    if (low >= high) { //step1 
        return;      //step 2

    }
    
    int mid = (low + high)/2; //step 2

    //step 3
    // fungsi rekursi






}
