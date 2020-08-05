#include	"account.h"
#include	"date.h"
#include	<iostream>

using namespace std;

int main() {
	Date date(2008, 11, 1); //起始日期
	//建立几个账户
	string a = "S3755217";
	string b = "02342342";
	SavingsAccount accounts[] = {
		SavingsAccount(date,a,0.015), SavingsAccount(date,b,0.015)
	};

	const int n = sizeof(accounts) / sizeof(SavingsAccount);
	//几笔账户
	accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");
	accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
	accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");

	//开户后第90天到了银行的计息日， 结算所有帐户的年息
	cout << endl; for (int i = 0; i < n; i++) {
		accounts[i].settle(Date(2009, 1, 1));
		accounts[i].show(); cout << endl;
	}
	//输出各个帐户信息
	cout << "Total: " << SavingsAccount::getTotal() << endl;

	return 0;
}
