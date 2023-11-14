//
// Created by Eren Avsar on 2023-11-09.
//


/*
MEMORY - DYNAMIC ALLOCATION

 STACK AND THE HEAP


 STACK:

 int main(){
 function.1;
 ..
 }

 local variables and the called functions are put in the stack memory. Once the memory in the stack gets out
 of scope its popped out from the memory in FILO style

 HEAP:

 When doing something in the HEAP its our responsibility to add and remove the information from the memory

 int* p = new int;
 //declare a point of type pointer to int is now pointing to a integer in the heap;
 // the variable p is however in stack however since p is just a pointer it does not take a lot memory.

 *p = 3; // to assign a value to the variable in the heap;


 delete p; // read the comment below

 p = nullptr; // point to nullptr so we don't have issues without code if we are using
 the variable p in our calculation by mistake;

 p = 0; // same as the previous one this also means point to nullptr;

 we can also say p = new int(15);

 // now that we did this the previous integer we created that is 3 is hanging freely in the heap memory so we will
 need to delete the memory manually which is the cause for memory leak.

 */


#include <iostream>
#include <chrono>


struct Character{
    std::string Name;
    float health;

    Character(){
        Name = "Kamil";
        health = 100;

    }
};

int main(){

    Character kamil;
    // will be in the stack
    // will create the character in the heap and the pointer in the stack
    auto start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 10; i++){


        auto* eren = new Character();

        std::cout<<"........................"<<std::endl;

        std::cout<<eren->Name<<std::endl;
        std::cout<<eren->health<<std::endl;

        delete eren;
        // without delete it uses about 14 gb + 2.4gb  of memory and with it only uses 2.3gb;
    }

    auto finish = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::seconds>(finish-start).count() << "s\n";





}