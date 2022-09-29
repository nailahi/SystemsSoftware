#include<iostream>
using namespace std;


class Course{
protected:
string name;
string id;

public:
  Course(){
 
 }

    void printDetails(){
    cout<< "name", "id";
    }
    
    ~Course();
};

class courseDept: public Course{
protected:
    string level;
    string department;
    
public:
    courseDept(){
    
    }
    void printDetails(){
    cout<< "name", "id", "level", "department";
    }
    ~courseDept();
};

int main(){
Course literature;
//literature.printDetails();
courseDept English;
//English.printDetails();

}
