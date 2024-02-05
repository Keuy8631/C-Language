#include<iostream>
#include<cstdlib>

using namespace std;

class CWin{
        char id;
        int height, width;
    public:
        int area(void){
            return height*width;
        }
        void show_area(void){
            cout << "Windows " << id << ", area= " << area() << endl;
        }
}

int main(){
    CWin win1, win2;
    // win1.id = 'A';
    // win1.height = -40;
    // win1.width = 50;
    // win1.show_area();

    win2.id = 'B';
    win2.height = 40;
    win2.width = 50;

}