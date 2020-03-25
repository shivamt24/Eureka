#include<iostream>
using namespace std;

int main(){
    int b = 5;
    int *a = &b;
    int **c = &a;
    cout << "\n val of b " << b;
    cout << "\nadd of b " << &b;
    cout << "\nval of a " << a;
    cout << "\nadd of a " << &a;
    cout << "\nptr val " << *a;
    cout << "\n val of c " << c;
    cout << "\n single ptr c " << *c;
    cout << "\n double ptr c " << **c;
    cout << "\n val of &c " << &c; 
    return 0;
}