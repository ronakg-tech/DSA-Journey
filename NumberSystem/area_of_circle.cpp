#include<iostream>
using namespace std;

int main(){
    float PI= 3.14;
    float rad;
    cout << "enter a radius: ";
    cin >> rad;
    
    float Area = PI*(rad*rad);
    cout <<  "Area of Circle" << Area;

    return 0;
}
