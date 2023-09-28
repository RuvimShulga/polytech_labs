#include <iostream>

void addarrays(const float* arr1, const float* arr2, float* result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    const int size = 5;

    float array1[size] = {1, 2, 3, 4, 5};
    float array2[size] = {6, 7, 8, 9, 10};
    float result[size];

    addarrays(array1, array2, result, size);

    std::cout << "Результат сложения массивов:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}