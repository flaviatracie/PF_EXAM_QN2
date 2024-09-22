#include <iostream>
using namespace std;

int main() {
    const int LENGTH = 21;
    char message[LENGTH];
    int i;

    // (i) Original version with cin >> to read input word by word
    cout << "Enter a sentence (cin >> method):" << endl;
    cin >> message[0];
    i = 0;
    while (i < LENGTH - 1 && message[i] != '\n') {
        ++i;
        cin >> message[i];
    }
    message[i] = '\0';
    cout << "Result using cin >>: " << message << endl;

    // (ii) Modified version with cin.get() to read input character by character
    cout << "\nEnter a sentence (cin.get method):" << endl;
    cin.get(message[0]);
    i = 0;
    while (i < LENGTH - 1 && message[i] != '\n') {
        ++i;
        cin.get(message[i]);
    }
    message[i] = '\0';
    cout << "Result using cin.get: " << message << endl;

    return 0;
}
