#include <iostream>

using namespace std;

#define M 26

void generatePalindromePermutation(const string &text);

bool canMakePalindrome(const string &text, int *letterCounts);

bool nextPermutation(string &s);

int binarySearch(string &s, int l, int r, int key);

string reverse(string text);

void reverseSubstr(string &s, int l, int r);

void swap(char *a, char *b);

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
    } while (nextPermutation(half));
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

bool nextPermutation(string &s) {
    int len = s.length();
    int i = len - 2;

    while (i >= 0 && s[i] >= s[i + 1]) {
        --i;
    }

    if (i < 0) {
        return false;
    } else {
        int index = binarySearch(s, i + 1, len - 1, s[i]);
        swap(&s[i], &s[index]);
        reverseSubstr(s, i + 1, len - 1);
        return true;
    }
}

int binarySearch(string &s, int l, int r, int key) {
    int index = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (s[mid] <= key) {
            r = mid - 1;
        } else {
            l = mid + 1;
            if (index == -1 || s[index] >= s[mid]) {
                index = mid;
            }
        }
    }
    return index;
}

string reverse(string text) {
    reverseSubstr(text, 0, int(text.length()) - 1);
    return text;
}

void reverseSubstr(string &s, int l, int r) {
    while (l < r) {
        swap(&s[l++], &s[r--]);
    }
}

void swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}
