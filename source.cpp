#include"student.h"

using namespace std;

    student::student(){}
    //this constructor allows us to initialize private variables on the fly
    student::student(string name, int ID, string addr, double gpa)
    {
        this->name=name;
        this->ID=ID;
        this->addr=addr;
        this->gpa=gpa;
    }
    
    void student::setGPA(double gpa){
        this->gpa=gpa;
    }
    double student::getGPA(){
    return this->gpa;
    }
    void student::setName(string name){
        this->name=name;
    }
    string student::getName(){
    return this->name;
    }
    string student::getAddr(){
        return this->addr;
    }
    void student::setAddr(string addr){
        this->addr=addr;
    }
    void student::setID(int id)
    {
        this->ID=id;
    }
    int student::getID(){
        return this->ID;
    }
