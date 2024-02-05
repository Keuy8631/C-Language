#include<iostream>
#include<cstdlib>

using namespace std;

class CWin{
    public:
        char id;
        int height, width;

        int area(void){
            return width*height;
        }

        void set_data(char i, int h, int w){
            id = i;
            height = h;
            width = w;
        }
};

void show_area(CWin win){
    cout << "Windows " << win.id << ":" <<endl;
    cout << "Area= " << win.area() << endl;
}

int main(){
    CWin win1, win2, win3;
    win1.id = 'A';
    win1.height = 30;
    win1.width = 40;
    // win1.show_area();
    win2.set_data('B', 50, 60);
    show_area(win2);

    return 0;
}