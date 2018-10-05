/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Records.h
 * Author: Spencer Stockton
 *
 * Created on April 4, 2018, 10:12 AM
 */
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef RECORDS_H
#define RECORDS_H

class Records {
        
private:
    int recordNumber;
    int age1;
    string firstName;
    string newLast;
    string phoneNumber;
    string nameLast;
    
public:
    // SET FUNCTIONS
    void setRecord(int recIn);
    void setFirstName(string fNameIn);
    void setNameLast(string lastNameIn);
    void setPhoneNumber(string phoneIn);
    void setAge(int age);

    // GET FUNCTIONS
    int getRecord();
    int getAge();
    string getFirstName();
    string getNameLast();
    string getPhone();
    void getRecordInfo();
    
}; // end of class

#endif /* RECORDS_H */

