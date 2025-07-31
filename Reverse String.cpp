// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1


#include <iostream>
using namespace std;

int main() {
    string str1;
    string str2;
    int n;
cout << "Enter the string to reverse\n";
cin >> str1;
n = str1.length();
cout << "Reversed String\n";
for(int i = n;i>=0;i--){
    cout << str1[i] ;
}
    return 0;
}

// OUTPUT
// Enter the string to reverse
// akshit
// Reversed String
// tihska
