#include <iostream>
#include <fstream>
#include "password_strac.h"
using namespace std;

//Methods Decleartion
void ASSCI_check();
string input_password(string pass_input);


int main(){
    string pass_in;
    
      ASSCI_check();
   //create opcect from Pass class cold password_one
    Pass password_one;
    //set the value for opject by using check.... method
    password_one.set_password(input_password(pass_in));
    //this line for test cuose i don't complate it yet
    cout << password_one.get_password();

    
}
//unsuable yet';
    //declearion varibale for testing if it contain apper , small and numder
void ASSCI_check(){

   string pass_in = input_password("hjkdSF43rVf");
    int Apper = 0 , lower = 0, number = 0, athor;
    if(pass_in.length() >=6){
        for(int i =0;i<pass_in.length();i++){
            if(int (pass_in[i]) >= 65 && int(pass_in[i]) <=90){
                
                    Apper+=1;
            }
            else if(int(pass_in[i])>=97 && int(pass_in[i]) <= 122){
                 lower+=1;
            }
            else if(int(pass_in[i]) >= 48 && int(pass_in[i]) <= 57){
                number+=1;
      
            }
            else{
                athor+=1;
            }
        }
        if(Apper !=0 && lower!=0&&number!=0){
            cout <<"good this strong password";
        }
            
    
    }
}
//get the password and put it in get_password insde class

string input_password(string pass_input){
    return pass_input;
}
//\\\----------------------------\\\\---------------...////---------------------////

//try to use new way right OK lets start
