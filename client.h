//
// Created by bieni on 12.06.2023.
//

#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H

#include <string>
#include <iostream>
using namespace std;

class client {
private:
    string firstName;
    string lastName;
    string address;
    string gender;
public:
    client(string firstName, string lastName, string address, string gender);
    void showusers();
    string getFirstName();
    string getLastName();
    string getAddress();
    string getGender();


};


#endif //UNTITLED_CLIENT_H
