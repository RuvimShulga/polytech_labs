#include <iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class Date {
    public:
    void getdate(const std::string& dateStr) {
        size_t firstSlash = dateStr.find('/');
        size_t secondSlash = dateStr.rfind('/');

        if (firstSlash != std::string::npos && secondSlash != std::string::npos && secondSlash > firstSlash) {
            month_ = std::stoi(dateStr.substr(0, firstSlash));
            day_ = std::stoi(dateStr.substr(firstSlash + 1, secondSlash - firstSlash - 1));
            year_ = std::stoi(dateStr.substr(secondSlash + 1));
        } else {
            std::cerr << "Ошибка в формате даты" << std::endl;
        }
    }

    void showdate() const {
        std::cout <<  month_ << "/" << day_ << "/" << year_;
    }

    private:
    int month_;
    int day_;
    int year_;
};

class employee {
    public:
    employee() : id_{}, salary_{}, date_{}, type_{} {};

    void initialize() {
        string date;
        char type;

        cin >> id_ >> salary_ >> date >> type;
        date_.getdate(date);

        switch (type)
        {
        case 'l':
            type_ = laborer;
            break;
        case 's':
            type_ = secretary;
            break;
        case 'm':
            type_ = manager;
            break;
        case 'a':
            type_ = accountant;
            break;
        case 'e':
            type_ = executive;
            break;
        case 'r':
            type_ = researcher;
            break;
        default:
            break;
        }
    }

    void display() {
        cout << id_ << " " << salary_ << " ";
        date_.showdate();
        cout << " ";

        switch (type_)
        {
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

        cout << endl;
    }

    private:
    int id_;
    float salary_;
    Date date_;
    etype type_;

};

int main() {
    employee employees[3];
    cout << "Введите информацию о сотруднике в формате <номер> <оклад> <дата приема> <статус(первая буква)>" << endl;
    cout << "(в стусе могут храниться данные: laborer, secretary, manager, accountant, executive, researcher)" << endl;

    for (int i = 0; i < 3; i++) {
        employees[i].initialize();
    }

    cout << endl;
    cout << "Данные о сотрудниках: " << endl;
    for (int i = 0; i < 3; i++) {
        employees[i].display();
    }
    return 0;
}