//
// Created by Eren Avsar on 2023-11-02.
//

#include <iostream>

//void pause(); //Function prototype we only declare the function and tell the compiler the rules of these function
// if we do not declare it and initialize it later on we will get an identifier error since the compiler will now know "pause" identifier
//Forward declaration
char getBool();

void response(char responseFromUser);

void askQuestion();

int main(){

    askQuestion();

}




//We can now initialize the function later since the compiler knows the function exists and knows the rules the function has to
/* abide by during the programme.
void pause(){
    //Waits input from user before continuing;
    std::cout<<"Press Enter to Continue...";
    std::cin.get();
    return;
}
*/



char getBool(){
    //Gets either y or n from the user and assigns it to local var and returns that local variable;
    std::cout<<"Answer using y/n:  ";
    char response;
    std::cin >> response;
    return response;
}

void response(char responseFromUser){
    std::cout<<"Selection "<< responseFromUser<<" Locked"<<std::endl;
    return;
}

void askQuestion(){
    //Asks the user a yer or no question and informs the answer has been locked.
    char local_var=getBool();
    response(local_var);
}

