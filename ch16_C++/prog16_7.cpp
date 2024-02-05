#include<iostream>
#include<cstdlib>

using namespace std;

struct Win{
    char id;
    int width;
    int height;
};

int area(struct Win w){
    return w.height*w.width;
}

int main(){
    Win win1;

    win1.id = 'A';
    win1.height = 40;
    win1.width = 50;

    cout << "Window " << win1.id << ", area= " << area(win1) << endl;
}