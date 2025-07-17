#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int sum = 0;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int original = num;

    while(num != 0){
        int rem = num % 10;            // last digit nikaala
        sum = sum + pow(rem, 3);       // uska cube karke sum mein add kiya
        num = num / 10;                // number ko ek digit chhota kiya
    }

    cout << "Sum of cubes = " << sum << endl;

    if(sum == original){
        cout << "It is an Armstrong number" << endl;
    } else {
        cout << "It is not an Armstrong number" << endl;
    }

    return 0;
}
