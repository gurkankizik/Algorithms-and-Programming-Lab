#include <iostream>

class Date {
private:
	int day, month, year, hour, minute;

public:
	Date();
	Date(int, int, int, int, int);
	void displayDate();
};

Date::Date() {
	this->day = 1;
	this->month = 1;
	this->year = 1970;
	this->hour = 0;
	this->minute = 0;
}

Date::Date(int day, int month, int year, int hour, int minute) {
	this->day = day;
	this->month = month;
	this->year = year;
	this->hour = hour;
	this->minute = minute;
}

void Date::displayDate() {
	std::cout << this->day << "/" << this->month << "/" << this->year << " " << this->hour << "." << this->minute << std::endl;
}

class Tweet {
private:
	unsigned int id;
	unsigned int userId;
	std::string text;
	Date date;

public:
	Tweet();
	Tweet(int, int, std::string, Date date);
	Tweet(const Tweet&);
	void display();
};

Tweet::Tweet() {
	this->id = 1;
	this->userId = 1;
	this->text = "Hello World!";
	this->date = date;
}

Tweet::Tweet(int id, int userId, std::string text, Date date) {
	this->id = id;
	this->userId = userId;
	this->text = text;
	this->date = date;
}

Tweet::Tweet(const Tweet& t) {
	id = t.id;
	userId = t.userId;
	text = t.text;
	date = t.date;
}

void Tweet::display() {
	std::cout << "Tweet Id:" << this->id << std::endl;
	std::cout << "Tweet User Id:" << this->id << std::endl;
	std::cout << "Text:" << this->text << std::endl;
	std::cout << "Date:"; date.displayDate();
	std::cout << " " << std::endl;
}

int main() {
	Tweet t;
	Date();
	Tweet t2(2, 2, "Hello World! #World", Date(12, 06, 2022, 18, 30));
	Tweet t3{ t };
	t.display();
	t2.display();
	t3.display();

	return 0;
}
