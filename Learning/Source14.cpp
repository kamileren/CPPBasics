//
// Created by Eren Avsar on 2023-11-06.
//

/*

 POINTERS:

 int myInt = 2;

 the above variable myInt has a specific area in the memory it occupies meaning there is an address to that memory in the variable above
 the above variable above take up 4 bytes the variable above points to first memory byte address.

 int* ptr = &myInt;

 we have now created a pointer called ptr that points to the memory address of myInt. It is important that ptr is not equal to myInt it is
 only pointing to that address.

 std::cout<<ptr<<std::endl; // this will print out the memory address pointer ptr is storing.

 std::cout<<*ptr<<std::endl; // this will print out the variable in the memory address the pointer is carrying





 */

#include <iostream>

struct Container{

    Container(){
        std::string Name = "Default Box";
        X = 0;
        Y = 0;
        Z = 0;
    }

    std::string Name;
    int X;
    int Y;
    int Z;
};

int main(){

    int a = 12;
    int* ptr = &a;

    std::cout<<*ptr<<std::endl;

    //....................................
    std::cout<<"...................................."<<std::endl;


    Container box = Container();
    Container* ptrBox = &box;

    ptrBox->X = 12;
    ptrBox->Y = 42;
    ptrBox->Z = 10;


    std::cout<<"The Name of Box: "<<ptrBox->Name<<std::endl;
    std::cout<<"Value of X: "<<ptrBox->X<<std::endl;
    std::cout<<"Value of Y: "<<ptrBox->Y<<std::endl;
    std::cout<<"Value of Z: "<<ptrBox->Z<<std::endl;

    // We can acess member variables using an arrow operator for pointers to get their assigned value or even change the values;





    //......................................
    std::cout<<"...................................."<<std::endl;


    int numbers[] = {0,1,2,3,4,5,6,7,8,9};
    int* numPtr = numbers;

    std::cout<<*numPtr<<std::endl;
    //we can do post/pre prefix addition/subtraction since the memory location of arrays are next to each we can move forward and backwards to get the next previous value
    std::cout<<*++numPtr<<std::endl;
    std::cout<<*--numPtr<<std::endl;






}
