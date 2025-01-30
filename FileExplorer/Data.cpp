#include "Data.h"

Data::Data()
{
	day = 1;
	month = 1;
	year = 2000;
}

Data::Data(int day, int month, int year)
{
	SetDay(day);
	SetMonth(month);
	SetYear(year);
}

void Data::SetDay(int day)
{
	if (day <1 ||day > 31) {
		std::cout << "Invalid\n";
	}
	this->day = day;
}

void Data::SetMonth(int month)
{
	if (month<1 || month > 12) {
		std::cout << "Invalid\n";
	}
	this->month = month;
}

void Data::SetYear(int year)
{
	if (year < 1) {
		std::cout << "Invalid\n";
	}
	this->year = year;

}

int Data::GetDay()
{

	return day;
}

int Data::GetMonth()
{
	return month;
}

int Data::GetYear()
{
	return year;
}

void Data::Display()
{
	std::cout << day << " / " << month << " / " << year;
}
