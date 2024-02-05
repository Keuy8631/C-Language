#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> number = {10, 20, 30};

    for(auto n : number) {
        cout << n << endl;
    }

    return 0;
}