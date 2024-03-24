// Write a program to detect whether keyword or not including number and identifier.N.B: We did it by separate programs. Today, using the user define function and complete task in a program.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isKeyword(const char *string) {
    char key[40][10] = {"main", "int", "switch", "break", "do", "for", "while", "if", "else", "float", "double", "char", "bool", "void"};
    for (int i = 0; i < 14; i++) {
        if (strcmp(string, key[i]) == 0) {
            return true;
        }
    }
    return false;
}

bool isNumber(const char *number) {
    int i = 0;
    if (number[i] == '-') {
        i++;
    }
    while (number[i] != '\0') {
        if (!isdigit(number[i])) {
            return false;
        }
        i++;
    }
    return true;
}

bool isValidIdentifier(const char *array) {
    char special_chars[] = {'`','~','!','@','#','$','%','^','&','*','(',')','_','+','=','-','[',']','{','}',':',';','<','>','?','/','.',','};
    if (isdigit(array[0])) {
        return false;
    }
    for (int i = 0; i < 28; i++) {
        if (array[0] == special_chars[i]) {
            return false;
        }
    }

    // Check the rest of the characters
    for (int i = 1; array[i] != '\0'; i++) {
        if (!isalnum(array[i]) && array[i] != '_') {
            return false;
        }
    }
    return true;
}

bool isOperator(char op) {
    char operators[] = {'+', '-', '*', '/', '=', '<', '>', '&', '|', '!', '%'};
    for (char o : operators) {
        if (op == o) {
            return true;
        }
    }
    return false;
}

int main() {
    char input[50];
    cout << "Enter keyword, number, identifier, or expression: ";
    cin.getline(input, 50);

    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        if (isOperator(input[i])) {
            cout << input[i] << " is an operator." << endl;
        } else if (isKeyword(input + i)) {
            cout << input + i << " is a keyword." << endl;
            i += strlen(input + i) - 1;
        } else if (isNumber(input + i)) {
            cout << input + i << " is a number." << endl;
            i += strlen(input + i) - 1;
        } else if (isValidIdentifier(input + i)) {
            cout << input + i << " is a valid identifier." << endl;
            i += strlen(input + i) - 1;
        } else if (isspace(input[i])) {
            continue;
        } else {
            cout << input[i] << " is neither a keyword, a number, nor a valid identifier." << endl;
        }
    }

    return 0;
}
