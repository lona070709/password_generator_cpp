#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    while (true)
    {
        int length;

        cout << "Enter password length" << endl;
        cin >> length;

        if (length < 0)
        {
            cout << "Error.Your password must be from 1 to 100" << endl;
            
        }
        for (int i = 0; i < length; i++)
        {
            char f = 33 + rand() % 94;
            cout << f;
        }
        cout << endl;

        char answer;
        cout << "Do you wanna another one (y/n) ?" << endl;
        cin >> answer;

        if (answer == 'n')
        {
            cout << "Goodbye" << endl;
            break;
        }
    }
    return 0;
}
