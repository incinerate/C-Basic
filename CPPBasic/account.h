#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#endif // !__ACCOUNT_H__

#include	<iostream>
using namespace std;

class SavingAccount // �����˻���
{
public:
	// ���캯��
	SavingAccount(int date, int id, double rate);
	~SavingAccount();

	int getId() { return id; }
	double getBalance() { return balance; }
	double getRate() { return rate; }
	
	// ��Ǯ
	void deposit(int date, double amount);
	// ȡǮ
	void withdraw(int date, double amount);
	// ������Ϣ��ÿ��1��1�յ���
	void settle(int date);
	// ��ʾ�˻���Ϣ
	void show();
private:
	int id; //�˺�
	double balance; //���
	double rate; //����������
	int lastDate; //�ϴα����������
	double accumulation; //�����ۼ�֮��
	static double total; //�����˻����ܽ��

	//��¼һ����
	void record(int date, double amount);
	
	//��õ�ָ������Ϊֹ���ۼƽ��
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
	amount = floor(amount * 100 + 0.5) / 100; // ����С�������λ
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