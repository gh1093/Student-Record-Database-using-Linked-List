# Student-Record-Database-using-Linked-List

#include <iostream>
#include<cstring>
#include"student.h"


using namespace std;





//linked lists contain nodes and each node contains a pointer to the next node
//remember: each node must hold a student record
struct node{
    student stud;
    node *next;
};

//our append function: we feed it the root node of the linked list. If the node
//we feed it is null, we know it is the root so we go ahead and insert the student record
//Otherwise we go all the way to the end of the list until we hit a null and then
// place our record into that node
void append(node *root,student s)
{
    if(root==NULL)
    {
        root->stud=s;
        root->next=NULL;
    }
    else if(root!=NULL)
    {
        while(root->next!=NULL)
        {
            root=root->next;
        }
        root->next=new node;
        root->next->stud=s;
        root->next->next=NULL;
        
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

 
    
    //Here we have the array of the 15 student records being initialized one by one
    
    student *arr=new student[15];
    arr[0]= student("Bob B.",1,"49 Hi Rd",3.5);
    arr[1]=student("Mark Mot",23,"123 blah st.",2.3);
    arr[2]=student("Sam Sosa",21,"1234 vegas st.",2.5);
    arr[3]=student("Bill Beeter",91,"22 ford st",2.2);
    arr[4]=student("Jesse Jot",66,"45 string st.",2.32);
    arr[5]=student("Tim Trunk",234,"909 hill st.",4.0);
    arr[6]=student("Mike Jordan",421,"834 cherry st.",2.9);
    arr[7]=student("Elvis Pres",83,"092 love st.",2.3);
    arr[8]=student("George Wash",43,"123 run st.",0.3);
    arr[9]=student("John Jones",72,"1934 hide st.",4.0);
    arr[10]=student("Sam Cassidy",32,"502 hider st.",3.6);
    arr[11]=student("Ryan Rooter",909,"678 circle st.",3.2);
    arr[12]=student("Chris Cryer",192,"432 avenue st.",1.2);
    arr[13]=student("Phil Foots",8472,"839 grave st.",2.09);
    arr[14]=student("Madison Monto",55,"303 winter st.",1.3);
       
    //this node is used for the linked list
    node *n=new node();
    //node *n = NULL;
    //in this for loop we output all the info in the array of the 15 student records
    //also, we append every student record into the linked list
    for(int a=0;a<15;a++)
    {
        cout<< arr[a].getName() << " "
        << arr[a].getAddr()<< " "
        << arr[a].getGPA()<< " "
        << arr[a].getID()<< " "
        <<endl;
        
        append(n,arr[a]);
    }
    
    //here we output all the info that was appended to the linked list in the above for loop
    //I added the "-->" to make the linked list easy to visualize when we output it
    while(n!=NULL)
    {
        cout<< n->stud.getName()<< " -- >";
        n=n->next;
    }
    if(n==NULL)
        cout<<"NULL";
    return 0;
}

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


