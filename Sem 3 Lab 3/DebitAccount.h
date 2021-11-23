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
    string  Currency;                                                           //Валюта, в которой хранятся сбережения клиента банка
    double  Balance;                                                            //Текущий баланс счета клиента банка

public:
    static int DA_count;
    DebitAccount();
    DebitAccount(string curr, double bal);
    ~DebitAccount();
    void Replenishment(int add, string curr = "RUB");
    void Debting(int dec, string curr = "RUB");
    struct Currency_struct;
};

typedef vector <DebitAccount> DEBIT_ACCOUNT_DATABASE;
