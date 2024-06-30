// C++ program to explain destructors 
#include <bits/stdc++.h> 
using namespace std; 
class Geeks { 
public: 
	int id; 
	
	//Definition for Destructor 
	~Geeks(){ 
		cout << "Destructor called for id: " << id <<endl; 
	} 
}; 

int main() { 
	Geeks obj1; 
	obj1.id=2; 

    for(int i=0; i<5; i++){
        Geeks obj2;
        obj2.id = i;
    } // Scope for obj2 ends here 

	return 0; 
} // Scope for obj1 ends here 