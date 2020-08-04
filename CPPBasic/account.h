#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#endif // !__ACCOUNT_H__

#include	<iostream>
using namespace std;

class SavingAccount // 储蓄账户类
{
public:
	// 构造函数
	SavingAccount(int date, int id, double rate);
	~SavingAccount();

	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }
	
	// 存钱
	void deposit(int date, double amount);
	// 取钱
	void withdraw(int date, double amount);
	// 结算利息，每年1月1日调用
	void settle(int date);
	// 显示账户信息
	void show();
private:
	int id; //账号
	double balance; //余额
	double rate; //存款的年利率
	int lastDate; //上次变更余额的日期
	double accumulation; //余额按日累加之和
	static double total; //所有账户的总金额

	//记录一笔账
	void record(int date, double amount);
	
	//获得到指定日期为止的累计金额
	double const accumulate(int date) {
		return accumulation + balance * (date - lastDate);
	}
};


inline SavingAccount::SavingAccount(int date, int id, double rate)
	:id(id), balance(0), lastDate(date), rate(rate), accumulation(0)
{
	cout << date << "\t#" << id << "is created" << endl;
}

void SavingAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = floor(amount * 100 + 0.5) / 100; // 保留小数点后两位
	balance += amount;
}

void SavingAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;
	if (interest != 0) {
		record(date, interest);
	}
	accumulation = 0;
}

void SavingAccount::show() {
	cout << "#" << id << "\tBalance:" << balance;
}
SavingAccount::~SavingAccount()
{
}