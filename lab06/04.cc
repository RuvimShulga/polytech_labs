#include <iostream>

using namespace std;

class Time {
    public:
    Time() : hours_{} , minutes_{}, seconds_{} {};
    Time(int hours, int minutes, int seconds) : hours_(hours), minutes_(minutes), seconds_(seconds) {};

    void display() const {
        cout << hours_ << ":" << minutes_ << ":" << seconds_;
    }

    Time add(const Time& other) const  {
        Time res;
        int carry_hours = 0, carry_minutes = 0;

        res.seconds_ = seconds_ + other.seconds_;
        carry_minutes += res.seconds_ / 60;
        res.seconds_ %= 60;

        res.minutes_ = minutes_ + other.minutes_ + carry_minutes;
        carry_hours += res.minutes_ / 60;
        res.minutes_ %= 60;

        res.hours_ = hours_ + other.hours_ + carry_hours;

        return res;
    }

    private:
    int hours_;
    int minutes_;
    int seconds_;
};



int main() {
    Time time1;
    const Time time2(2, 12, 57);
    const Time time3(2, 34, 4);

    time1 = time2.add(time3);
    time1.display();

    return 0;
}