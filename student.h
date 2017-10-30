#include<iostream>
#include<cstring>
using namespace std;
#ifndef STUDENT_H
#define	STUDENT_H


class student{
private:
    string name;
    int ID;
    string addr;
    double gpa;
    
public:
    student();
    //this constructor allows us to initialize private variables on the fly
    student(string name, int ID, string addr, double gpa);
    
    void setGPA(double gpa);
    double getGPA();
    void setName(string name);
    string getName();
    string getAddr();
    void setAddr(string addr);
    
    void setID(int id);
    int getID();
    
   
};


#endif	/* STUDENT_H */

