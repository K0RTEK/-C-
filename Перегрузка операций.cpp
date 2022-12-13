#include "Date.h"
using namespace std;

bool Date::check() {
    return  Day > 31 || Day < 0 || Month > 12 || Month < 0 || Year < 0;
}
Date::Date() :Year(2018), Month(1), Day(1) {}
Date::Date(int d, int m, int y) :Year(y), Month(m), Day(d) {}
Date::Date(Date const& other) :Year(other.Year), Month(other.Month), Day(other.Day) {}


std::string  Date::to_string_int(int x) {
    char str_rub[11];
    return std::string(itoa(x, str_rub, 10));
}
std::string Date::to_string() const {
    return to_string_int(Day) + '/' + to_string_int(Month) + '/' + to_string_int(Year);
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.to_string();
    return out;
};
std::istream& operator>>(std::istream& in, Date& date) {
    char t = '.';
    in >> date.Day >> t >> date.Month >> t >> date.Year;

    return in;
};

int Date::after_a_specified_number_of_days(int d2)
{
    return(Day + d2);
}
int Date::subtraction_of_a_specified_number_of_days(int d2)
{
    return(Day - d2);
}

void Date::leap_year()
{
    if (Year / 4 == 0)
    {
        cout << "Год високосный" << endl;
    }
    else
    {
        cout << "Год не високосный" << endl;
    }

}
Date Date::assignment_of_individual_parts(Date d2)
{
    return Date(d2.Day, d2.Month, d2.Year);
}
void Date::date_comparison(Date d2)
{
    int D = Day;
    int D2 = d2.Day;
    if (D < D2 && Month <= d2.Month && Year <= d2.Year)
    {
        cout << "Первая Дата больше чем вторая" << endl;
    }
    else
        if (D > D2 && Month >= d2.Month && Year >= d2.Year)
        {
            cout << "Первая дата меньше второй" << endl;
        }
        else
        {
            cout << "Первая дата равна второй" << endl;
        }
}
int Date::calculating_the_number_of_days_between_dates(Date d2)
{
    return Day - d2.Day + (Month - d2.Month) * 30 + ((Year - d2.Year) * 365);
}