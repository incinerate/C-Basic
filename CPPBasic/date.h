#ifndef __DATE_H__
#define __DATE_H__

class Date
{
private:
	int year; //年 
	int month; //月 
	int day; //日 
	int totalDays; //该日期是从公元元年1月1日开始的第几天 
public:
	Date(int year, int month, int day);
	int getYear() const { return year; }
	int getMonth() const { return month; }
	int getDay() const { return day; }
	int getMaxDay() const;
	bool isLeapYear() const {
		return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	}
	void show() const;
	int distance(const Date& date) const {
		return totalDays - date.totalDays;
	}
};
#endif // !__DATE_H__

