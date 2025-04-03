#include <iostream>
#include <iomanip>
#include <array>
#include <string.h>

typedef enum
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} months_e;
typedef unsigned int months_t;
typedef unsigned int month_days_t;

typedef enum
{
    SUNDAY=0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} week_days_e;
typedef unsigned int week_days_t;

std::array<std::string, 7U> week_day_names = {
    "SUNDAY",
    "MONDAY",
    "THUESDAY",
    "WEDNESDAY",
    "THURSDAY",
    "FRIDAY",
    "SATURDAY"
};

const int PADDING = 5;
const int USER_PADDING = 4;

void print_month_header(const char* month_name, int year)
{
    std::cout << std::endl << std::setfill('-') << std::setw(PADDING) << "-";
    std::cout << std::setw(PADDING) << month_name << " " << year << std::setw(PADDING) << "-";
    std::cout << std::endl;
}

void print_week_header()
{
    std::cout << std::setfill(' ') << std::setw(PADDING) << "Sun";
    std::cout << std::setw(PADDING) << "Mon";
    std::cout << std::setw(PADDING) << "Tue";
    std::cout << std::setw(PADDING) << "Wed";
    std::cout << std::setw(PADDING) << "Thu";
    std::cout << std::setw(PADDING) << "Fri";
    std::cout << std::setw(PADDING) << "Sat" << std::endl;
}

void print_week(std::array<unsigned int, 7> days)
{
    for (int day : days)
    {
        std::cout << std::setw(PADDING);
        if (day == 0)
        {
            std::cout << "-" ;
        }
        else
        {
            std::cout << day;
        }
    }

    std::cout << std::endl;
}

void print_fisrt_week_day_options()
{
    for (int i = 0; i < week_day_names.size(); i++)
    {
        std::string week_day = week_day_names[i];
        std::cout << "(" << i << ") " << week_day << std::endl;
    }
}

week_days_t print_month(month_days_t num_days, week_days_t start_week_day = week_days_e::SUNDAY)
{
    std::array<month_days_t, 7U> week;
    week_days_t week_day_count = start_week_day;
    week.fill(0);

    for (month_days_t day = 1; day <= num_days; day++)
    {
        week[week_day_count] = day;

        if (week_day_count >= week_days_e::SATURDAY)
        {
            week_day_count = week_days_e::SUNDAY;
            print_week(week);
            week.fill(0);
        }
        else
        {
            week_day_count ++;
        }
    }

    if (week_day_count >= week_days_e::SUNDAY)
    {
        print_week(week);
    }

    return week_day_count;
}

int main(int argc, const char** argv)
{
    // 1. Ask user for a Year
    unsigned int year;
    std::cout << "Which year do you want to print?" << std::endl << std::setw(USER_PADDING);
    std::cin >> year;

    // 2. Ask user the first week day of the Year
    week_days_t start_week_day;
    std::cout << std::endl << "Select the NUMBER of which week day this year should start:" << std::endl;
    print_fisrt_week_day_options();
    std::cin >> start_week_day; 
    
    if (start_week_day > 6)
    {
        std::cout << "Invalid week day!" << std::endl;
        return 0;
    }
    
    // 3. Print the calendar
    std::cout << std::endl << "Printing " << year << " starting on a " << week_day_names[start_week_day] << std::endl;

    months_t month_count = months_e::JANUARY;
    int year_day_count = 0;
    int total_days = 365;
    if (year % 4 == 0)
    {
        total_days = 366;
    }


    while (year_day_count < total_days)
    {
        int days_count = 0;
        std::string month_name;

        switch (month_count)
        {
        case months_e::JANUARY:
            month_name = "January";
            days_count = 31;
            break;
        case months_e::FEBRUARY:
            month_name = "February";
            if (year % 4 == 0)
            {
                days_count = 29;
            }
            else
            {
                days_count = 28;
            }
            break;
        case months_e::MARCH:
            month_name = "March";
            days_count = 31;
            break;
        case months_e::APRIL:
            month_name = "April";
            days_count = 30;
            break;
        case months_e::MAY:
            month_name = "May";
            days_count = 31;
            break;
        case months_e::JUNE:
            month_name = "June";
            days_count = 30;
            break;
        case months_e::JULY:
            month_name = "July";
            days_count = 31;
            break;
        case months_e::AUGUST:
            month_name = "August";
            days_count = 31;
            break;
        case months_e::SEPTEMBER:
            month_name = "September";
            days_count = 30;
            break;
        case months_e::OCTOBER:
            month_name = "October";
            days_count = 31;
            break;
        case months_e::NOVEMBER:
            month_name = "November";
            days_count = 30;
            break;
        case months_e::DECEMBER:
            month_name = "December";
            days_count = 31;
            break;
        default:
            std::cout << "Something went wrong!" << std::endl;
            year_day_count = 400;
            break;
        }

        if (days_count > 0)
        {
            print_month_header(month_name.c_str(), year);
            print_week_header();
            start_week_day = print_month(days_count, start_week_day);
            month_count ++;
            year_day_count += days_count;
        }
    }

    return 0;
}