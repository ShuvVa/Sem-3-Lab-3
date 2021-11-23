//#include <iostream>
//#include <vector>
//#include <string>
//
//#include "Client.h"
//
//using namespace std;
//
//int Client::count = 0;                                                          //—четчик дл€ присвоени€ ID новым аккаунтам клиентов банка
//
//Client::Client(string name, string surname, string password) {
//    ClientID = count;
//    count++;
//    Name = name;
//    Surname = surname;
//    Password = password;
//}
//
//Client::~Client() {
//    ClientID = 0;
//    Name = "";
//    Surname = "";
//    Password = "";
//}
//
//bool Client::operator==(Client& a) {
//    return (Name==a.Name)&&(Surname==a.Surname)&&(Password==a.Password);
//}