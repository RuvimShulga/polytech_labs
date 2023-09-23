#include <iostream>
using namespace std;

int maxint(const int *arr, int size) {
  if (size == 0) {
    return -1;
  }

  int maxIndex = 0;
  for (int i = 1; i < size; ++i) {
    if (arr[i] > arr[maxIndex]) {
      maxIndex = i;
    }
  }
  return maxIndex;
}

int main() {
  int n;
  cout << "Введите количество элементов в массиве: ";
  cin >> n;
  if (n <= 0) {
    cout << "Количество элементов должно быть больше нуля." << endl;
    return 1;
  }

  int *arr = new int[n];
  cout << "Введите " << n << " целых чисел:" << endl;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int maxIndex = maxint(arr, n);
  if (maxIndex != -1) {
    cout << "Наибольший элемент: " << arr[maxIndex] << endl;
    cout << "Индекс наибольшего элемента: " << maxIndex << endl;
  } else {
    cout << "Массив пуст." << endl;
  }
  delete[] arr;
  return 0;
}