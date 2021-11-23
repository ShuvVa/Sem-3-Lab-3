//#pragma once
//#include <iostream>
//#include <string>
//#include <vector>
//
//#include "DebitAccount.h"
//
//class Bank {                                                                    //Банк со всеми данными об аккаунтах клиентов банка
//
//private:
//    int BankID;
//    string BankName;
//    CLIENT_DATABASE Database;                                                   //База данных клиентов банка
//    DEBIT_ACCOUNT_DATABASE  DbtAcc;                                             //Дебетовые счета клиентов банка
//public:
//    static int count;
//    Bank(string BN);
//    ~Bank();
//    CLIENT_DATABASE GetClientDatabase() {                                       //Получение базы данных клиентов банка
//        return Database;
//    }
//    DEBIT_ACCOUNT_DATABASE GetDebitAccountDatabase() {
//        return DbtAcc;
//    }
//    void     Greeting();                                                        //Приветствие от банка
//    void     Login(Bank& bnk);
//    void     CreateAccount(Bank& bnk);                                          //Создание нового аккаунта клиента банка
//    void     UserGIU(Client& C);
//};