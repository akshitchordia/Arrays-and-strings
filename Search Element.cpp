// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1

#include <iostream>
using namespace std;

int main() {
    int key,i;
    int x[5] = {34,56,78,90,20};
    cout << "Enter the number to find: ";
    cin >> key;
   
    for(i = 0;i<5;i++)
        {if (key == x[i])
        {cout << "Your number found at: " << i+1;
        break;
        }
        }
        if (i==5)
        cout<<"Number not found";
    return 0;
}

/*
Enter the number to find: 67
Number not found

Enter the number to find: 20
Your number found at: 5
*/
