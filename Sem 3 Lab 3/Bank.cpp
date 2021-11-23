//#include <iostream>
//#include <vector>
//#include <string>
//
//#include "Bank.h"
//
//int Bank::count = 0;
//
//Bank::Bank(string BN) {
//    BankID = count;
//    count++;
//    BankName = BN;
//    Greeting();
//}
//
//Bank::~Bank() {
//    BankID = 0;
//    BankName = "";
//    Database = {};
//    DbtAcc = {};
//}
//
//void Bank::UserGIU(Client& C) {
//    int choice = 0;   
//    cout << "Hello, " << C.GetClientName() << " what You're planning for this session?\n1. Deposit money into account.\n2. Withdraw money from account.\n3.Send money to another account.\n: ";
//    do{
//    cin >> choice;
//    switch (choice) {
//    case 1:{
//        
//    }
//    case 2: {
//
//    }
//    case 3: {
//
//    }
//    default: {
//        cout << "Wrong number. Please, try again\n: ";
//    }
//    }
//    } while (choice<1||choice>3);
//}
//
//void Bank::Login(Bank& bnk) {
//    string name;
//    string surname;
//    string pswrd_check;
//    int id;
//
//    cout << "Please, enter your name: \n: ";
//    getline(cin, name);
//
//    cout << "Please, enter your surname: \n: ";
//    getline(cin, surname);
//
//    cout << "Please, enter your password: \n: ";
//    getline(cin, pswrd_check);
//
//    Client check(name,surname,pswrd_check);
//
//    
//    for (int i = 0; i < bnk.Database.size(); i++) {
//        if (bnk.Database[i] == check) {
//            id = i;
//            break;
//        }
//    }
//
//    Client & Logined = bnk.Database[id];
//
//    cout << "You're successfuly logged into your account.\n";
//
//    UserGIU(Logined);
//
//}
//
//void Bank::CreateAccount(Bank& bnk) {
//
//    string name;
//    string surname;
//    string password, pswrd_check;
//
//    cout << "Please, enter your name: \n: ";
//    getline(cin, name);
//
//    cout << "Please, enter your surname: \n: ";
//    getline(cin, surname);
//
//    cout << "Please, enter password that you want to use for future authorizations. \nThe password must contain only lowercase letters (a - z), uppercase letters (A - Z), and numbers (0 - 9).\n: ";
//    getline(cin, password);
//
//    cout << "Please, write your password again: \n: ";
//    getline(cin, pswrd_check);
//
//    if (password == pswrd_check) {
//        Client NewClient(name, surname, password);
//        bnk.Database.push_back(NewClient);
//    }
//    else {
//        cout << "Passwords do not math. \n";
//    }
//
//}
//
//void Bank::Greeting() {
//
//    cout << "Welcome to \"Sambir\"!\nPlease autorize yourself in the system.\n1. Login.\n2. Create new client account.\n: ";
//    int choice;
//    cin >> choice;
//    switch (choice) {
//    case 1: {
//        
//    }
//    }
//    //cout << "Please choice what You're gonna do during this session:\n1. ";
//}