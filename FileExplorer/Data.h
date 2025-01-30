#pragma once
#include<iostream>
class Data
{

	int day, month, year;

public:

	Data();
	Data(int, int, int);
	void SetDay(int);
	void SetMonth(int);
	void SetYear(int);
	int GetDay();
	int GetMonth();
	int GetYear();
	void Display();
};

