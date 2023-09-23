#include <iomanip>
#include <iostream>
using namespace std;

struct time {
  int hours;
  int minutes;
  int seconds;
};

long int time_to_secs(struct time user_time) {
  long int result =
      user_time.hours * 3600 + user_time.minutes * 60 + user_time.seconds;
  return result;
}

struct time secs_to_time(long int seconds) {
  int hours = seconds / 3600;
  seconds = seconds % 3600;
  int minutes = seconds / 60;
  seconds = seconds % 60;
  struct time user_time;
  user_time.hours = hours;
  user_time.minutes = minutes;
  user_time.seconds = seconds;
  return user_time;
}

int main() {
  setlocale(LC_ALL, "rus");
  char dummychar;
  struct time user_time1, user_time2, total_user_time;
  cout << "Введите первое время в формате HH:MM:SS : ";
  cin >> user_time1.hours >> dummychar >> user_time1.minutes >> dummychar >>
      user_time1.seconds;
  cout << "Введите второе время в формате HH:MM:SS : ";
  cin >> user_time2.hours >> dummychar >> user_time2.minutes >> dummychar >>
      user_time2.seconds;

  long int total_sec1 = time_to_secs(user_time1);

  long int total_sec2 = time_to_secs(user_time2);

  long int total_sec = total_sec1 + total_sec2;

  total_user_time = secs_to_time(total_sec);

  cout << "Результат сложение первого и второго времени: " << setfill('0')
       << setw(2) << total_user_time.hours << ":" << setfill('0') << setw(2)
       << total_user_time.minutes << ":" << setfill('0') << setw(2)
       << total_user_time.seconds << endl;

  return 0;
}