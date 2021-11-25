#include <iostream>
#include <string>
#include <vector>

#include "DebitAccount.h"

using namespace std;

struct DebitAccount::Curr_strct{

    enum Curr {
        RUB = 0,
        USD,
        EUR
    };

    const vector <double> CURRENCY_EXCHANGE_RATE = { 1.0, 0.014, 0.012 };           //Курс валют в отношеннии RUB/Валюта: RUB, USD, EUR

};

int DebitAccount::DA_count = 0;                                                    //Счетчик для присвоения ID новым дебетовым счетам аккаунтов клиентов банка

DebitAccount::DebitAccount() {
    DebitAccountID = DA_count;
    Currency = Curr_strct::RUB;
    Balance = 0.0;
    DA_count++;
}

DebitAccount::DebitAccount(int curr, double bal) {
    DebitAccountID = DA_count;
    Currency = curr;
    Balance = bal;
    DA_count++;
}

DebitAccount::~DebitAccount() {
    DebitAccountID = 0;
    Currency = 0;
    Balance = 0;
}

int DebitAccount::GetDebitAccountID() {
    return DebitAccountID;
}

int DebitAccount::GetCurrency() {
    return Currency;
}

int DebitAccount::GetBalance() {
    return Balance;
}

void DebitAccount::Replenishment(int add, int curr) {
    Curr_strct a;
    Balance += add * a.CURRENCY_EXCHANGE_RATE[Currency] / a.CURRENCY_EXCHANGE_RATE[curr];
}

void DebitAccount::Debting(int dec, int curr) {
    Curr_strct a;
    int k = Balance;
    Balance -= dec * a.CURRENCY_EXCHANGE_RATE[Currency] / a.CURRENCY_EXCHANGE_RATE[curr];
    if (Balance < 0) {
        cout << "Ошибка! На балансе недостаточно средств!\n";
        Balance = k;
    }
}

void DebitAccount::Out() {
    cout << "DebitAccountID: " << DebitAccountID << endl;
    cout << "Currency: " << Currency << endl;
    cout << "Balance: " << Balance;
    switch (Currency) {
    case 0: {
        cout << " RUB" << endl;
        break;
    }
    case 1: {
        cout << " USD" << endl;
        break;
    }
    case 3: {
        cout << " EUR" << endl;
        break;
    }
    }
    cout << endl;
}

int GetDebitAccountIDFr(DebitAccount& dbt_acc) {
    return dbt_acc.DebitAccountID;
}

int GetCurrencyFr(DebitAccount& dbt_acc) {
    return dbt_acc.Currency;
}

int GetBalanceFr(DebitAccount& dbt_acc) {
    return dbt_acc.Balance;
}

void ReplenishFr(DebitAccount& dbt_acc, int add, int curr) {
    DebitAccount::Curr_strct a;
    dbt_acc.Balance += add * a.CURRENCY_EXCHANGE_RATE[dbt_acc.Currency] / a.CURRENCY_EXCHANGE_RATE[curr];
}

void DebtingFr(DebitAccount& dbt_acc, int dec, int curr) {
    DebitAccount::Curr_strct a;
    int k = dbt_acc.Balance;
    dbt_acc.Balance -= dec * a.CURRENCY_EXCHANGE_RATE[dbt_acc.Currency] / a.CURRENCY_EXCHANGE_RATE[curr];
    if (dbt_acc.Balance < 0) {
        cout << "Ошибка! На балансе недостаточно средств!\n";
        dbt_acc.Balance = k;
    }
}

void OutFr(DebitAccount& dbt_acc) {
    cout << "DebitAccountID: " << dbt_acc.DebitAccountID << endl;
    cout << "Currency: " << dbt_acc.Currency << endl;
    cout << "Balance: " << dbt_acc.Balance;
    switch (dbt_acc.Currency) {
    case 0: {
        cout << " RUB" << endl;
        break;
    }
    case 1: {
        cout << " USD" << endl;
        break;
    }
    case 3: {
        cout << " EUR" << endl;
        break;
    }
    }
    cout << endl;
}