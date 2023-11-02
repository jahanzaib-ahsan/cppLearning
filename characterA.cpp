#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {
        if (name[i] == 'a') {
            cout << "Character Found" << endl;
       
        }
        
    }
    

    return 0;
}
