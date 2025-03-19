
#include <iostream>
using namespace std;
int main() {
    int a, cal = 0 ;
    cout << "enter the digits : ";
    cin >> a;
    
    while(a > 0){
        a = a / 10;
        cal++;
    }
    cout << cal ;
}