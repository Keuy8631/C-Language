#include <iostream>

using namespace std;

// globel variable
int g_a = 1;
int g_b = 4;

const int c_g_c = 5;

int main(){
    // local variable
    int a = 2;
    int b = 3;

    cout << "The address of local variable a is " << &a << endl;
    cout << "The address of local variable b is " << &b << endl;

    // static variable
    static int c = 5;
    cout << "The address of static variable c is " << &c << endl;

    const int c_c = 7;

}