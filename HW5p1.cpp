
#include <iostream>
using namespace std; 
  
int main(int argc, char** argv) 
{ 
cout << "enter a number";
cin >> argc;
int SUM =0;
    if(argc >= 2 && argc <= 6){
    cout<< "you entered " << argc << ".";
    
    	
    	for (int i =0;i <60; i++){
    	SUM = SUM + i;
    	cout << i <<"  ";
    	}
    	
    }else{
    cout << "The number must be greater than or equal to 2 and less than or equal to 6. You entered " << argc;
    }
    
 
  
  cout << " \n" << SUM << " is the sum";
    return 0; 
} 
