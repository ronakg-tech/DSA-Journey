#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
     
    cout << "Enter numbers:\n ";
    cin >> a;
    cin >> b;

    int num = max(a,b);

    for(int i=num; i<=a*b; i++){
        if( i % a == 0 && i % b == 0){
            cout << i << " is a LCM of " << a << " and " << b;
            break;
         }   
     }
     return 0;
}
