#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int hcf = 1;
    int minNum = min(a, b);

    for(int i = 1; i <= minNum; i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }

    cout << "HCF of " << a << " and " << b << " is: " << hcf;
    return 0;
}
