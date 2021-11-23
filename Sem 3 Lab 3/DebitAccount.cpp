#include <iostream>
#include <string>
#include <vector>

#include "DebitAccount.h"

using namespace std;

struct DebitAccount::Currency_struct{

    enum Curr {
        RUB = 1,
        USD,
        EUR
    };

    const vector <double> CURRENCY_EXCHANGE_RATE = { 1.0, 0.014, 0.012 };           //Курс валют в отношеннии RUB/Валюта: RUB, USD, EUR

};

int DebitAccount::DA_count = 0;                                                    //Счетчик для присвоения ID новым дебетовым счетам аккаунтов клиентов банка

DebitAccount::DebitAccount() {
    Currency_struct;
    DebitAccountID = DA_count;
    Currency = "RUB";
    Balance = 0.0;
    DA_count++;
}

DebitAccount::DebitAccount(string curr, double bal) {
    DebitAccountID = DA_count;
    Currency = curr;
    Balance = bal;
    DA_count++;
}

DebitAccount::~DebitAccount() {
    DebitAccountID = 0;
    Currency = "";
    Balance = 0;
}

void DebitAccount::Replenishment(int add, string curr) {
    
}

void DebitAccount::Debting(int dec, string curr) {

}