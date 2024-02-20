#include <iostream>
#include <string>

using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to concatenate two strings
string concatenateStrings(const string& s1, const string& s2) {
    return s1 + s2;
}

int main() {
    // Print "Hello, World!"
    cout << "Hello, World!" << endl;

    // Add two numbers
    int result = add(5, 3);
    cout << "5 + 3 = " << result << endl;

    // Concatenate two strings
    string str1 = "Hello";
    string str2 = "World";
    string resultStr = concatenateStrings(str1, str2);
    cout << str1 << " " << str2 << " = " << resultStr << endl;

    return 0;
}
