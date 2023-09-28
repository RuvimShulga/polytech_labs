#include <iostream>
#include <string>

class Date {
    public:
    void getdate(const std::string& dateStr) {
        size_t firstSlash = dateStr.find('/');
        size_t secondSlash = dateStr.rfind('/');

        if (firstSlash != std::string::npos && secondSlash != std::string::npos && secondSlash > firstSlash) {
            month = std::stoi(dateStr.substr(0, firstSlash));
            day = std::stoi(dateStr.substr(firstSlash + 1, secondSlash - firstSlash - 1));
            year = std::stoi(dateStr.substr(secondSlash + 1));
        } else {
            std::cerr << "Ошибка в формате даты" << std::endl;
        }
    }

    void showdate() const {
        std::cout << "Дата: " << month << "/" << day << "/" << year << std::endl;
    }

    private:
    int month;
    int day;
    int year;
};

int main() {
    Date myDate;

    std::string inputDate;
    std::cout << "Введите дату в формате месяц/день/год: ";
    std::cin >> inputDate;

    myDate.getdate(inputDate);
    myDate.showdate();

    return 0;
}