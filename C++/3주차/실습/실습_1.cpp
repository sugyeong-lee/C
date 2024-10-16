#include <iostream>
#include <string>
using namespace std;

class Account{
    string name;
    int number;
    int cash;
    public:
        Account(string a, int b, int c);
        string getOwner();
        int inquiry();
        void deposit(int k);
        int withdraw(int k);
};

Account::Account(string a, int b, int c){
    name = a;
    number = b;
    cash = c;
}

void Account::deposit(int k){
    cash+=k;
}

int Account::inquiry(){
    return cash;
}

string Account::getOwner(){
    return name;
}

int Account::withdraw(int k){
    if(k > cash){
        k = cash;
        cash = 0;
    }
    else{
        cash -= k;
    }
    return k;
}


int main(){
    Account a("kitae",1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "잔액은 "<<a.inquiry()<<endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "잔액은 "<<a.inquiry() <<endl;
}