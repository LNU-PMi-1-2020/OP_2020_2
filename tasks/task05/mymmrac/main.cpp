#include <iostream>
#include <algorithm>

using namespace std;

#define M 26

void generatePalindromePermutation(const string &text);

bool canMakePalindrome(const string &text, int *letterCounts);

string reverse(string text);

int main() {
    string text;
    cout << "Enter text:" << endl;
    cin >> text;

    cout << "All palindromes:" << endl;
    generatePalindromePermutation(text);
}


void generatePalindromePermutation(const string &text) {
    int letterCounts[M];
    if (!canMakePalindrome(text, letterCounts)) {
        cout << "Can't make palindrome" << endl;
        return;
    }

    string half;
    char oddChar;
    for (int i = 0; i < M; i++) {
        if (letterCounts[i] % 2 == 1) {
            oddChar = char(i + int('a'));
        }
        half += string(letterCounts[i] / 2, i + 'a');
    }

    string palindrome;
    int l = text.length();
    do {
        palindrome = half;
        if (l % 2 == 1) {
            palindrome += oddChar;
        }
        palindrome += reverse(half);
        cout << palindrome << endl;
    } while (next_permutation(half.begin(), half.end()));
}

bool canMakePalindrome(const string &text, int *letterCounts) {
    for (int i = 0; i < M; ++i) {
        letterCounts[i] = 0;
    }

    for (char i : text) {
        letterCounts[i - 'a']++;
    }

    int oddCount = 0;
    for (int i = 0; i < M; i++) {
        if (letterCounts[i] % 2 == 1) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

string reverse(string text) {
    string reversed;
    for (int i = int(text.length()) - 1; i >= 0; --i) {
        reversed += text[i];
    }
    return reversed;
}