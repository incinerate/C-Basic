#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include	"date.h"
#include	<string>
using namespace std;

//储蓄账户类 
class SavingsAccount
{
private:
	string id; //账号 
	double balance; //余额 
	double rate; //存款的年利率 
	Date lastDate; //上次变更余额的时期 
	double accumulation; //余额按日累加之和
	static double total; //所有账户的总金额 

	//记录一笔账，date为日期，amount为金额，desc为说明
	void record(const Date& date, double amount, const string& desc);
	void error(const string& msg) const;
	//获得指定日期为止的存款金额按日累加
	double accumulate(const Date& date) const {
		return accumulation + balance * date.distance(lastDate);
	}
public:
	SavingsAccount(Date& date, string& id1, double rate);
	const string& getId() { return id; }
	const double getBalance() { return balance; }
	const double getRate() { return rate; }
	static double getTotal() { return total; }
	//存入现金
	void deposit(const Date& date, double amount, const string& desc);
	//取出现金
	void withdraw(const Date& date, double amount, const string& desc);
	//结算利息，每年一月一日调用一次该函数
	void settle(const Date& date);
	//显示账户信息
	const void show();
};
#endif // !__ACCOUNT_H__
