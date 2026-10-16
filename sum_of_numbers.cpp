#include <iostream>
using namespace std;
int sum = 0;
int sum_of_N_Numbers(int n){
    int sum = 0;
    for(int i=1; i<=n;i++){
        sum+=i;
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The sum of first " << n << " numbers is: " << sum_of_N_Numbers(n) << endl;
    return 0;
}