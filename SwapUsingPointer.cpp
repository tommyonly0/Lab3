#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Input the value of 1st element : ";
    cin >> a;
    cout << "Input the value of 2st element : ";
    cin >> b;
    cout << "The value before swapping are : " << endl;
    cout << "element 1 = " << a << endl;
    cout << "element 2 = " << b << endl;
    c = b;
    int *data1, *data2;
    data1 = &a; 
    b = *data1;
    data2 = &c;
    a = *data2;
    cout << "The value after swapping are : " << endl;
    cout << "element 1 = " << a << endl;
    cout << "element 2 = " << b << endl;
    return 0;
}