// count the number of vowels and consonants in a string
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isConsonant(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z' && !isVowel(c));
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowelCount = 0;
    int consonantCount = 0;

    for (char c : str) {
        if (isVowel(c)) {
            vowelCount++;
        } else if (isConsonant(c)) {
            consonantCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}