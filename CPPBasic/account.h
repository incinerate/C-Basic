#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include	"date.h"
#include	<string>
using namespace std;

//�����˻��� 
class SavingsAccount
{
private:
	string id; //�˺� 
	double balance; //��� 
	double rate; //���������� 
	Date lastDate; //�ϴα������ʱ�� 
	double accumulation; //�����ۼ�֮��
	static double total; //�����˻����ܽ�� 

	//��¼һ���ˣ�dateΪ���ڣ�amountΪ��descΪ˵��
	void record(const Date& date, double amount, const string& desc);
	void error(const string& msg) const;
	//���ָ������Ϊֹ�Ĵ������ۼ�
	double accumulate(const Date& date) const {
		return accumulation + balance * date.distance(lastDate);
	}
public:
	SavingsAccount(Date& date, string& id1, double rate);
	const string& getId() { return id; }
	const double getBalance() { return balance; }
	const double getRate() { return rate; }
	static double getTotal() { return total; }
	//�����ֽ�
	void deposit(const Date& date, double amount, const string& desc);
	//ȡ���ֽ�
	void withdraw(const Date& date, double amount, const string& desc);
	//������Ϣ��ÿ��һ��һ�յ���һ�θú���
	void settle(const Date& date);
	//��ʾ�˻���Ϣ
	const void show();
};
#endif // !__ACCOUNT_H__
