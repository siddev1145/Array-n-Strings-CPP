//Name : Siddhant Bedre
//PRN : 23070123037
//Aim: To check a given number in an array

#include <iostream>
using namespace std;

int main() {
    int key,i;
    int x[5] = {34,56,78,90,20};
    cout << "Enter your key: ";
    cin >> key;
   
    for(i = 0;i<5;i++)
        {if (key == x[i])
        {cout << "Your number found at: " << i;
        break;
        }
        }
        if (i==5)
        cout<<"Number not found";
       
    return 0;
}

/*Output:
Enter your key: 5
Number not found

Enter your key: 34
Your number found at: 0
*/
