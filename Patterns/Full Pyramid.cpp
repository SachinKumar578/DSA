// A program to print Full Pyramid pattern. 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
   for(int i = 0; i < n; i++){
// For printing spaces.
for(int j = 0; j < n-i-1; j++){
    cout << " ";
}
// For printing stars.
for(int j = 0; j < i+1; j++){
    cout << "* ";
}
cout << endl;
   }
    
    return 0;
}
