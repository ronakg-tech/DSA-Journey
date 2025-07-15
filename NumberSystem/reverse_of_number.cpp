#include<iostream>
using namespace std;

int main(){
    int reverse_num = 0;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while(num!=0){
        int rem = num % 10;
        reverse_num = reverse_num * 10 + rem;
        num = num/10;
    }
    cout << "Reversed Number is " << reverse_num << endl;
    return 0;
}
