#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
//2018/2019 question 2ii

class account
{
public:
    string accountName, accountNumber;
    int accountBalance;
    int credit(int amount)
    {
        accountBalance += amount;
    }
    double interest(int days)
    {
        if (days == 30)
        {
            accountBalance = accountBalance * 0.115 +accountBalance;
        }
        else
        {
            cout << "No Interest" << endl;
        }
    }
    void custInfo()
    {
        cout << "Acount Name: " << accountName << endl
             << "Account Number: " << accountNumber << endl
             << "Account Balance: " << accountBalance << endl;
    }
};

int main()
{
    string balance;
    account act;

    

    ifstream userInfo("custRec.txt");
    if (userInfo.is_open())
    {
        while (!userInfo.eof())
        {
            getline(userInfo, act.accountName);
            getline(userInfo, act.accountNumber);
            getline(userInfo, balance);
        }
        stringstream(balance) >> act.accountBalance;
    }
    userInfo.close();
    ofstream userInfo2("custDetail.txt");
    if (userInfo2.is_open())
    {
        userInfo2 << act.accountName;
        userInfo2 << act.accountNumber;
        userInfo2 << act.accountBalance;
        userInfo2<< act.credit(1000);
        userInfo2 << act.interest(30);
    }
    act.custInfo();
    userInfo2.close();
    return 0;
}
