#include <cmath>
#include <iostream>

// Структура для представления интервала в футах и дюймах
struct Distance {
  int feet;
  float inches;
};

// Функция для вычисления среднего значения интервалов в массиве
Distance calculateAverageDistance(Distance distances[], int size) {
  Distance averageDistance = {0, 0.0};

  // Суммируем все интервалы в массиве
  for (int i = 0; i < size; ++i) {
    averageDistance.feet += distances[i].feet;
    averageDistance.inches += distances[i].inches;
  }

  // Выполняем коррекцию, если дюймы больше или равны 12
  if (averageDistance.inches >= 12.0) {
    averageDistance.feet += static_cast<int>(averageDistance.inches / 12.0);
    averageDistance.inches = fmod(averageDistance.inches, 12.0);
  }

  // Вычисляем среднее значение
  averageDistance.feet /= size;
  averageDistance.inches /= size;

  return averageDistance;
}

int main() {
  int numIntervals;
  std::cout << "Введите количество интервалов: ";
  std::cin >> numIntervals;
  Distance intervals[numIntervals];

  // Получение интервалов от пользователя
  for (int i = 0; i < numIntervals; ++i) {
    std::cout << "Введите интервал #" << i + 1 << " (футы дюймы): ";
    std::cin >> intervals[i].feet >> intervals[i].inches;
  }

  // Вычисление среднего значения
  Distance average = calculateAverageDistance(intervals, numIntervals);

  // Вывод среднего значения
  std::cout << "Среднее значение интервалов: " << average.feet << " футов "
            << average.inches << " дюймов" << std::endl;

  return 0;
}
