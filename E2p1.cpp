#include <iostream>
using namespace std;

class StudentID {
    
 
    
    
    public:
    int studentID;
    string CheckPalindrome(){
        int n,num,digit, rev = 0;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if (n == rev)
         cout << "The number " << studentID <<" is a palindrome.";
     else
         cout << "The number "<<studentID <<" is not a palindrome.";

    return " ";
    }
    
};

int main(){
    StudentID obj;
    obj.studentID = 901011415;
    cout<< obj.CheckPalindrome();
}
