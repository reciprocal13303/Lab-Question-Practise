#include<iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;
public:
    void setNum(int accountNumber)
    {
        this->accountNumber=accountNumber;
    }
    void setName(string accountHolder)
    {
        this->accountHolder=accountHolder;
    }
    void setBalance(double balance)
    {
        this->balance=balance;
    }
    int getNumber()
    {
        return this->accountNumber;
    }
    string getName()
    {
        return this->accountHolder;
    }
    double getBalance()
    {
        if(balance>=0)
            return this->balance;
        else
        {
            cout<<"You enter invalid number"<<endl;
            return 0;
        }
    }
};

int main()
{
    BankAccount a1;
    a1.setNum(325544897);
    a1.setName("Rahim");
    int b;
    cout<<"Enter you balance:"<<endl;
    cin>>b;
    a1.setBalance(b);
    cout<<"Account Number: "<<a1.getNumber()<<endl;
    cout<<"Account Name: "<<a1.getName()<<endl;
    cout<<"Balance: "<<endl<<a1.getBalance()<<endl;
    return 0;
}
