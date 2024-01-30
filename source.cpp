#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int selectArray() {
    return rand() % 4 + 1;
}
void passwordGenerator(int length) {

    string password = "";
    string uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowers = "abcdefghijklmnopqrstuvwxyz";
    string symbols = "~`!@#$%^&*()_+{}|:<>?-=[];',./";
    string numbers = "1234567890";
    for (int i = 0; i < length; ++i) {
        int opt = selectArray();
        switch (opt) {
        case 1:
            password += uppers[rand() % uppers.length()];
            break;
        case 2:
            password += lowers[rand() % lowers.length()];
            break;
        case 3:
            password += symbols[rand() % symbols.length()];
            break;
        case 4:
            password += numbers[rand() % 10];
            break;
        }
    }
    cout << "Your new generated password is: " << password << endl;
}

int main() {
    srand(time(NULL));
    int length;
    cout << "Type the length of your password ";
    cin >> length;
    passwordGenerator(length);

    return 0;
}
