#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout.setf(ios::showpos); 
    cout << 100 << endl;    
    cout << hex << 255;      
     return 0;
}