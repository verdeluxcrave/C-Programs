#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter a number to calculate factorial: ";
    cin >> n;
    int factorial = 1;
    while(n > 0){
        factorial *= n;
        n--;
    }
    cout << "Factorial: " << factorial << endl;
    return 0;
}