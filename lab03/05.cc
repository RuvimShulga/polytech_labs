#include <iomanip>
#include <iostream>
using namespace std;

struct time {
  int hours;
  int minutes;
  int seconds;
};

int main() {
  char dummychar;
  struct time user_time1, user_time2, total_user_time;
  cout << "Введите первое время в формате HH:MM:SS : ";
  cin >> user_time1.hours >> dummychar >> user_time1.minutes >> dummychar >>
      user_time1.seconds;
  cout << "Введите второе время в формате HH:MM:SS : ";
  cin >> user_time2.hours >> dummychar >> user_time2.minutes >> dummychar >>
      user_time2.seconds;

  int total_sec1 =
      user_time1.hours * 3600 + user_time1.minutes * 60 + user_time1.seconds;

  int total_sec2 =
      user_time2.hours * 3600 + user_time2.minutes * 60 + user_time2.seconds;

  int total_sec = total_sec1 + total_sec2;

  total_user_time.hours = total_sec / 3600;
  total_sec %= 3600;

  total_user_time.minutes = total_sec / 60;
  total_sec %= 60;

  total_user_time.seconds = total_sec;

  cout << "Результат сложение первого и второго времени: " << setfill('0')
       << setw(2) << total_user_time.hours << ":" << setfill('0') << setw(2)
       << total_user_time.minutes << ":" << setfill('0') << setw(2)
       << total_user_time.seconds << endl;

  return 0;
}
