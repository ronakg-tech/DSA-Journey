#include<iostream>
using namespace std;

int main(){
    int reverse_num = 0;
    int num;
    cout << "Enter an Original Number: ";
    cin >> num;

    int original = num;

    while(num!=0){
        int rem = num % 10;
        reverse_num = reverse_num * 10 + rem;
        num = num/10;
    }
    if(original == reverse_num){
        cout << original <<  " is a Palindrome Number." << endl;
    }else{
        cout << original << " is not a Palindrome Number." << endl;
    }
    return 0;
    
}
