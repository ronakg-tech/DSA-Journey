#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int sum;
    int n;
    cout << "enter a number: ";
    cin >> n;

    cout << "Fibonacci series:\n ";
  
    for(int i=0; i<n; i++){
        cout << a << " ";
        sum = a + b;

        a = b;
        b = sum;
    }
    return 0;
}
