#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* Count(char* str, char* s)
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 101; j++) {
            if (s[i] == str[j] && s[i + 1] == str[j + 1]) {
                str[j] = '*';
                str[j + 1] = '*';
            }
        }
    }
    return str;
}

int main()
{

    char str[101];
    char s1[] = "no";
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    char* dest = new char[151];
    dest = Count(str, s1);
    cout << "Modified string : " << dest << endl;
    return 0;
}