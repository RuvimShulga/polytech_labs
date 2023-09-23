#include <iostream>

using namespace std;

long int hms_to_secs(int hours, int minutes, int secs) {
  long int result;
  result = hours * 3600 + minutes * 60 + secs;
  return result;
}

int main() {
  int hours, minutes, secs;
  char dummy;
  cout << "Введите количество часов, минут и секунд в формате ЧЧ:ММ:СС ";
  cin >> hours >> dummy >> minutes >> dummy >> secs;
  long int res = hms_to_secs(hours, minutes, secs);
  cout << "Общее количество секунд: " << res << endl;

  return 0;
}