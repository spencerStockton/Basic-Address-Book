/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Records.cpp
 * Author: Spencer Stockton
 * 
 * Created on April 4, 2018
 */

#include "Records.h"
#include <string>

// SET FUNCTIONS
void Records::setRecord(int recIn){
    recordNumber = recIn;
}

void Records::setFirstName(string fNameIn){
   firstName = fNameIn;
}

void Records::setNameLast(string lastNameIn){
    nameLast = lastNameIn;
}

void Records::setPhoneNumber(string phoneIn){
    if (phoneIn.length() == 12 && phoneIn.at(3) == '-' && phoneIn.at(7) == '-'){
        phoneNumber = phoneIn;
    }
    else{
        cout << "That is not a valid phone number.\nSetting phone number to 000-000-0000." << endl;
        phoneNumber = "000-000-0000";
    }
}

void Records::setAge(int age){
    age1 = age;
}


//
// GET FUNCTIONS
//
int Records::getRecord(){
    return recordNumber;
}

string Records::getFirstName(){
    return firstName;
}

string Records::getNameLast(){
    return nameLast;
}

string Records::getPhone(){
    return phoneNumber;
}

int Records::getAge(){
    return age1;
}