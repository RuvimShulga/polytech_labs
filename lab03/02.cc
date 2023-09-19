#include <iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main() {
  char first_char;
  cout << "Введите первую букву должности (laborer, secretary, manager, "
          "accountant, executive, researcher): ";
  cin >> first_char;

  etype full_name;

  switch (first_char) {
  case 'l':
    full_name = laborer;
    break;
  case 's':
    full_name = secretary;
    break;
  case 'm':
    full_name = manager;
    break;
  case 'a':
    full_name = accountant;
    break;
  case 'e':
    full_name = executive;
    break;
  case 'r':
    full_name = researcher;
    break;
  default:
    break;
  }
  cout << "Полное название должности: ";
  switch (full_name) {
  case laborer:
    cout << "laborer";
    break;
  case secretary:
    cout << "secretary";
    break;
  case manager:
    cout << "manager";
    break;
  case accountant:
    cout << "accountant";
    break;
  case executive:
    cout << "executive";
    break;
  case researcher:
    cout << "researcher";
    break;
  default:
    break;
  }
  return 0;
}