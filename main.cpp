
#include <iostream>
using namespace std;

int main()
{
    int number;
    for (int i=1; i <= 3; i++){
        cout << "Enter a number: ";
        cin >> number;
        
        if (number == 5) {
            cout << "You win!"<< endl;
        }
    }
    
    

    return 0;
}