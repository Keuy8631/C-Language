#include<iostream>
#include<cstdlib>

/* 
    Without the command below,
    the output should type into
    std::cout << ch << " is a character." << std::endl;
    std::cout << a ...
    std::cout << b ...
*/
using namespace std;

int main(){
    char ch= 'K';
    int a = 12;
    float b = 12.63F;

    cout << ch << " is a character." << endl;
    cout << a << " is a integer." << endl;
    cout << b << " is a float." << endl;

    int x;
    float y;
    cout << "Type a integer number: ";
    cin >> x;
    cout << "Type a float number: ";
    cin >> y;
    cout << x << "+" << y << "=" << x+y << endl;
    
    return 0;
}