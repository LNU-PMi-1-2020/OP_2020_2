#include <bits/stdc++.h>

using namespace std;
#define M 26

bool isPalindrome(const string &str, int *freq) {
    memset(freq, 0, M * sizeof(int));
    for (char i : str) {
        freq[i - 'a']++;
    }

    int odd = 0;
    for (int i = 0; i < M; i++) {
        if (freq[i] % 2 == 1) {
            odd++;
        }
    }

    return odd <= 1;
}

string reverse(string str) {
    string rev = std::move(str);
    reverse(rev.begin(), rev.end());
    return rev;
}

void generatePalindromePermutation(const string &str) {
    int freq[M];
    if (!isPalindrome(str, freq)) {
        return;
    }

    int l = str.length();
    string half;
    char oddC;
    for (int i = 0; i < M; i++) {
        if (freq[i] % 2 == 1) {
            oddC = char(i + int('a'));
        }
        half += string(freq[i] / 2, i + 'a');
    }

    string palindrome;
    do {
        palindrome = half;
        if (l % 2 == 1) {
            palindrome += oddC;
        }
        palindrome += reverse(half);
        cout << palindrome << endl;
    } while (next_permutation(half.begin(), half.end()));
}

int main() {
    string str;
    cout << "Enter text" << endl;
    cin >> str;

    cout << "All palindrome permutations of " << str << " are:\n";
    generatePalindromePermutation(str);
}