#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout << "enter values: "<<endl;
    cin >> a >> b ;
   
    cout << "Before Swapping " << a << b << endl;
    temp = a;
    a = b;
    b = temp;
    
    cout << "After Swapping " << a << b << endl;
    return 0;
}
