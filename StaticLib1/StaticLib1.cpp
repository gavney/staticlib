// StaticLib1.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include <string>

bool compareStrings1(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

std::string rotateString(const std::string& s, int shift) {
    if (s.empty()) return s;

    shift %= s.length();
    return s.substr(shift) + s.substr(0, shift);
}

bool isVowel(char c) {
    c = std::tolower(c);
    return c == 'a' || c == 'e' || c == 'i' ||
        c == 'o' || c == 'u' || c == 'y';
}

void countVowelsAndConsonants(const std::string& s, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;

    for (char c : s) {
        if (std::isalpha(c)) {
            if (isVowel(c))
                vowels++;
            else
                consonants++;
        }
    }
}