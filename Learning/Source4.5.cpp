//
// Created by Eren Avsar on 2023-11-02.
//
#include <iostream>

void welcome(){
    std::cout<<"Welcome"<<std::endl;
    return;
}

void pause(){
    //Waits input from user before continuing;
    std::cout<<"Enter to Continue...";
    std::cin.get();
    return;
}

void printNumber(int numtoPrint){
    //Prints out the integer from input
    std::cout << numtoPrint<< std::endl;
    return;
}

int add(int a, int b){
    //returns the sum of two integers
    return a+b;
}


int main(){

    welcome();

    printNumber(5);

    int myVar(add(12,14)); // same functionality as int myVar = add(12,14);
    printNumber(myVar);

    pause();
}
