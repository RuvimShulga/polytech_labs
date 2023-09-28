#include <iostream>

int compstr(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        }

        str1++;
        str2++;
    }

    if (*str1 == '\0' && *str2 != '\0') {
        return -1;
    } else if (*str1 != '\0' && *str2 == '\0') {
        return 1;
    }

    return 0;
}

int main() {
    const char* str1 = "apple";
    const char* str2 = "banana";
    const char* str3 = "apple";
    const char* str4 = "zebra";

    int result1 = compstr(str1, str2);
    int result2 = compstr(str1, str3);
    int result3 = compstr(str1, str4);

    std::cout << "Результат сравнения str1 и str2: " << result1 << std::endl;
    std::cout << "Результат сравнения str1 и str3: " << result2 << std::endl;
    std::cout << "Результат сравнения str1 и str4: " << result3 << std::endl;

    return 0;
}