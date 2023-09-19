#include <iostream>
using namespace std;

struct time {
  int hours;
  int minutes;
  int seconds;
};

int main() {
  char dummychar;
  struct time user_time;
  cout << "Введите время в формате HH:MM:SS : ";
  cin >> user_time.hours >> dummychar >> user_time.minutes >> dummychar >>
      user_time.seconds;

  int total_sec =
      user_time.hours * 3600 + user_time.minutes * 60 + user_time.seconds;

  cout << "Общее количество секунд: " << total_sec << endl;

  return 0;
}