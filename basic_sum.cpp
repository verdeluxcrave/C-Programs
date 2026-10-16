 #include <iostream>
 using namespace std;

 int sum(int a,int b){
     return a+b;
 }
 
 int main() {
     // Your code here
     int x,y;
     cout << "Enter the two number followed by a space: ";
     cin>>x>>y;
     cout << "Sum of " << x << " and " << y << " is " << sum(x, y) << endl;

     return 0;
 }
