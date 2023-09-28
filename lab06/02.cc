#include <iostream>
using namespace std;

class employee {
    public:
    employee() : id_{}, salary_{} {};
    employee(int id, float salary) : id_(id), salary_(salary) {};

    void initialize(int id, float salary) {
        id_ = id;
        salary_ = salary;
    }

    void display() {
        cout << id_ << " " << salary_ << endl;
    }

    private:
    int id_;
    float salary_;
};

int main() {
    employee employeers[3];
    cout << "Введите информацию о 3 сотрудниках в формате <номер> <оклад>" << endl;
    for (int i = 0; i < 3; i++) {
        int id;
        float salary;
        cin >> id >> salary;
        employeers[i].initialize(id, salary);
    } 

    cout << endl;
    cout << "Информация о сотрудниках: " << endl;

    for (int j = 0; j < 3; j++) {
        employeers[j].display();
    }

    return 0;
}