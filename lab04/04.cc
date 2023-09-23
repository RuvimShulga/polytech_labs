#include <iomanip>
#include <iostream>
using namespace std;

struct time {
  int hours;
  int minutes;
  int seconds;
};

void swap(struct time *first, struct time *second) {
  int tmp_hours = (first->hours);
  int tmp_minutes = first->minutes;
  int tmp_seconds = first->seconds;
  first->hours = second->hours;
  first->minutes = second->minutes;
  first->seconds = second->seconds;
  second->hours = tmp_hours;
  second->minutes = tmp_minutes;
  second->seconds = tmp_seconds;
};

int main() {
  setlocale(LC_ALL, "rus");
  char dummy;
  struct time first, second;
  cout << "Введите первое время в формате ЧЧ:ММ:СС ";
  cin >> first.hours >> dummy >> first.minutes >> dummy >> first.seconds;
  cout << "Введите второе время в формате ЧЧ:ММ:СС ";
  cin >> second.hours >> dummy >> second.minutes >> dummy >> second.seconds;
  swap(&first, &second);
  cout << "Теперь первое время: " << setfill('0') << setw(2) << first.hours
       << ":" << setfill('0') << setw(2) << first.minutes << ":" << setfill('0')
       << setw(2) << first.seconds << endl;
  cout << "Теперь второе время: " << setfill('0') << setw(2) << second.hours
       << ":" << setfill('0') << setw(2) << second.minutes << ":"
       << setfill('0') << setw(2) << second.seconds << endl;

  return 0;
}