#include <iostream>

using namespace std;

int* func(){
    // local variable in stack, when the process done it will be cleaned.
    int a = 10;
    int *b = &a;
    return b;
}

int main(){
    int *p = func();

    cout << *p << endl;
    cout << *p << endl;
}