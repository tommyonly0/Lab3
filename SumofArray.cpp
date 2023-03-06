#include <iostream>
using namespace std;

int sum(int *arr, int size) {
    int total = 0;
    for(int i=0; i<size; i++) {
        total += *(arr+i);
    }
    return total;
}

int main() {
    int size;
    cout << "Input the number of elements to store in the array (max 10) : ";
    cin >> size;

    int arr[size];
    cout << "Input " << size << " number of elements in the array : " << endl;
    for(int i=0; i<size; i++) {
        cout << "element -" << i+1 << " : ";
        cin >> *(arr+i);
    }

    int result = sum(arr, size);

    cout << "The sum of array is : " << result << endl;

    return 0;
}