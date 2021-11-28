#pragma once
#include <iostream>
#include <string>
#include <vector>

//#include "Client.h"

using namespace std;




class DebitAccount {                                                            //Дебетовый счет клиента банка

private:
    int     DebitAccountID;                                                     //ID дебетового счета клиента банка
    //int     ClientID;                                                           //ID владельца дебетовго счета
    int  Currency;                                                           //Валюта, в которой хранятся сбережения клиента банка
    double  Balance;                                                            //Текущий баланс счета клиента банка

public:
    struct Curr_strct;
    static int DA_count;
    DebitAccount();
    DebitAccount(int curr, double bal);
    ~DebitAccount();

    int GetDebitAccountID();
    int GetCurrency();
    double GetBalance();

    void Replenishment(int add, int curr = 0);
    void Debting(int dec, int curr = 0);
    void Out();

    friend int GetDebitAccountIDFr(DebitAccount& dbt_acc);
    friend int GetCurrencyFr(DebitAccount& dbt_acc);
    friend double GetBalanceFr(DebitAccount& dbt_acc);

    friend void ReplenishFr(DebitAccount& dbt_acc, int add, int curr);
    friend void DebtingFr(DebitAccount& dbt_acc, int dec, int curr);
    friend void OutFr(DebitAccount& dbt_acc);
};

int GetDebitAccountIDFr(DebitAccount& dbt_acc);
int GetCurrencyFr(DebitAccount& dbt_acc);
double GetBalanceFr(DebitAccount& dbt_acc);

void ReplenishFr(DebitAccount& dbt_acc, int add, int curr);

void DebtingFr(DebitAccount& dbt_acc, int dec, int curr);

void OutFr(DebitAccount& dbt_acc);

//typedef vector <DebitAccount> DEBIT_ACCOUNT_DATABASE;
