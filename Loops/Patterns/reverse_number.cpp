#include <iostream>
using namespace std;

int main() {
    // Your code here
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    char ch = 'A';
    for (int i=1;i<=n;i++){
        for (int j=i;j>=1;j--){
            cout << ch << " ";
            ch+=1;
        }
        cout << endl;
    }    
    return 0;
}