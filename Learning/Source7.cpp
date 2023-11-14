//
// Created by Eren Avsar on 2023-11-04.
//

//Passing by Value

#include <iostream>



void addOne(int num) {
    num++;
}

//the function will not change the variable a we have passed since everything inside the function happens in local scope;

//Passing by reference

void addOneRef(int& num){
    // num is a direct reference to whatever has been passed in the input of the function
    num++;//this is basically same as doing a++ outside the scope but using a reference we can edit outside the scope since they have now
    // become one thing meaning num = a, num will be deleted when its out of the scope since it is in a local scope in stack memory
}


//the function will now change the variable since it is getting a direct reference to the variable instead of a copy of it
//meaning we can now change variable outside its own scope using a reference;



int main(){

    int a = 1;

    std::cout<<"a is: "<<a<<std::endl; //will print out 1
    addOne(a);
    std::cout<<"a After adding without reference:  "<<a<<std::endl; //will print out 1

    std::cout<<"a is: "<<a<<std::endl; //will print out 1
    addOneRef(a);
    std::cout<<"a After adding with reference: "<<a<<std::endl; //will print out 2

    int b = 1;
    int& ref = b;
    ref++; //both b and ref point in the same memory location hence if we edit one it will edit the other
    std::cout<<"b After adding one to its reference: "<<b<<std::endl;

    return 0;

}