// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented PProgramming
#include <iostream>
using namespace std;

class person{
public:
    char name[20];
    int id;
    void getdetails(){
        cout << id << endl;
    }
};

int main(){
    person p1; // p1 is a object
    p1.id = 69;
    p1.getdetails();

    return 0;
}