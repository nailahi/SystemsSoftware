#include<iostream>
using namespace std;


class Number{
protected: int num;

public: Number(){
int num= 3232;
}

public: Number(int n){
n = num;
}
};

class Cube: public Number{
int num;
public:
    void cube(Number,int num){
        int cube= num*num*num;
        cout << cube;
}
};

class Prime:public Number{
public:
int num;

    void prime(Number,int num){
        bool point=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          point = false;
          break;
       }
    }
    cout<< point;
}
};


int main(){
Number test = 5;
Number test1 = 14;
Number test2 = 100;
Number test3;
Number test4;
Number test5 = 43;

}

