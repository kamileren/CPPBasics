//
// Created by Eren Avsar on 2023-11-02.
//

#include <iostream>

int a = 10; //Global Scope

namespace B {
    int b = 12;
}

int main(){

    {
        int a = 10; //Local scope
        int b = 9;

        //The 'a' variable above shows the global a variables hence we cannot get access to it we can use a namespace like the variable b above
        std::cout<<"Local a: "<<a<<std::endl;
        std::cout<<"Global B: "<<B::b<<std::endl;
        std::cout<<"Local B: "<<b<<std::endl;
    }

    int a = 13; //Function Scope
    std::cout<<"FunctionScope:" << a << std::endl; //This will not work because a is not in the same scope

    //Blocks Hides information from each other

    // Like above if we declare a variable with the same name it will print out the variable initialized in its own scope



    std::cin.get(); // waits for an input from the user without quitting

    return 0;
}
