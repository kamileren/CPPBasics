//
// Created by Eren Avsar on 2023-11-02.
//

#include <iostream>

int main(){


    /*

    if(expression/conditional){statements...}

    ex. int a = 5 and int b = 4

    if(a == b){std::cout<<"hello""; is not going to print out "hello"

    else{} is used when the if statement above does not have true expression;
    the code runs this block of the code if the 'if' expression above is evaluated false then else statement runs

     */

    int a(1); // These two do the same effect one uses the parentheses operator to initialize it
    int b = 12;

    if(a==b){
        std::cout<<"hello"<<std::endl;

    }else if(a<b){
        std::cout<<"whatever"<<std::endl;
    }else{
        std::cout<<"world"<<std::endl;
    }

    //else if is only checked if the first if expression evaluates to false meaning that even if it evaluates to true it is still ignored



    std::cin.get();


}