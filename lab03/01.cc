#include <iostream>
using namespace std;

struct employee {
  int id;
  float salary;
};

int main() {
  int id1, id2, id3;
  float salary1, salary2, salary3;
  cout << "Введите информацию о сотрудниках в формате <номер сотрудника> "
          "<зарплата>"
       << endl;
  cin >> id1 >> salary1;
  cin >> id2 >> salary2;
  cin >> id3 >> salary3;

  employee employee1, employee2, employee3;
  employee1 = {id1, salary1};
  employee2 = {id2, salary2};
  employee3 = {id3, salary3};

  cout << "Информация о сотрудниках: " << endl;

  cout << employee1.id << " " << employee1.salary << endl;
  cout << employee2.id << " " << employee2.salary << endl;
  cout << employee3.id << " " << employee3.salary << endl;

  return 0;
}