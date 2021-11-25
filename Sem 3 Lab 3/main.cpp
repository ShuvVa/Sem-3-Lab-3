#include <iostream>
#include <string>
#include <vector>

//#include "Bank.h"
#include "DebitAccount.h"

using namespace std;

void UserMethod(DebitAccount& dbt_acc) {
    int choice;
    cout << "Выберите действие со счетом: \n1. Пополнить счет.\n2. Снять деньги со счета.\n: ";
    cin >> choice;
    switch (choice) {
    case 1: {
        int curr, add;
        dbt_acc.Out();
        cout << "Валюта:\n1. RUB.\n2. USD.\n3. EUR.\n: ";
        cin >> curr;
        cout << "Сумма для пополнения: \n: ";
        cin >> add;
        dbt_acc.Replenishment(add, curr-1);
        dbt_acc.Out();
        break;
    }
    case 2: {
        int curr, dec;
        dbt_acc.Out();
        cout << "Валюта:\n1. RUB.\n2. USD.\n3. EUR.\n: ";
        cin >> curr;
        cout << "Сумма для снятия: \n: ";
        cin >> dec;
        dbt_acc.Debting(dec, curr-1);
        dbt_acc.Out();
        break;
    }
    default: {
        cout << "Такого действия нет. До свидания." << endl;
        break;
    }
    }
}

void UserFriend(DebitAccount& dbt_acc) {
    int choice;
    cout << "Выберите действие со счетом: \n1. Пополнить счет.\n2. Снять деньги со счета.\n: ";
    cin >> choice;
    switch (choice) {
    case 1: {
        int curr, add;
        OutFr(dbt_acc);
        cout << "Валюта:\n1. RUB.\n2. USD.\n3. EUR.\n: ";
        cin >> curr;
        cout << "Сумма для пополнения: \n: ";
        cin >> add;
        ReplenishFr(dbt_acc, add, curr - 1);
        OutFr(dbt_acc);
        break;
    }
    case 2: {
        int curr, dec;
        OutFr(dbt_acc);
        cout << "Валюта:\n1. RUB.\n2. USD.\n3. EUR.\n: ";
        cin >> curr;
        cout << "Сумма для снятия: \n: ";
        cin >> dec;
        DebtingFr(dbt_acc,dec, curr - 1);
        OutFr(dbt_acc);
        break;
    }
    default: {
        cout << "Такого действия нет. До свидания." << endl;
        break;
    }
    }
}

int main(){
    setlocale(LC_ALL, "Rus");
    DebitAccount User_Alice(1, 1500);
    int choice = 0;
    //DEBIT_ACCOUNT_DATABASE Data = {User_Alice};
    cout << "Выберите каким образом производить операции над дебетовым счетом:\n1. Через методы класса.\n2. Через дружественные функции.\n: ";
    cin >> choice;
    switch (choice) {
    case 1: {
        UserMethod(User_Alice);
        break;
    }
    case 2: {
        UserFriend(User_Alice);
        break;
    }
    default: {
        cout << "Такого варианта нет. До свидания." << endl;
        break;
    }
    }
    
    //DebitAccount User_Bob;
    

    //Bank Sambir("Sambir");

    /*cout.fill('0');
    cout.width(16);
    cout  << 15 << endl;*/
    return 0;
}


