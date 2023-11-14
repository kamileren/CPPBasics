//
// Created by Eren Avsar on 2023-11-04.
//

#include <iostream>


class Entity{
private:

    int age;
    std::string name;
    mutable int debug;


public:

    int getAge() const{
        debug+=15; //as we can see we can change the value of debug even though the method is a const this is because -------
        return age;
    }

    std::string getName() const{
        debug+=3; //------- we used the keyword mutable when declaring debug
        return name;
    }

    void setName(std::string Name){
        name = Name;
    }

    void setAge(int Age){
        age = Age;
    }


    void printPerson() const{
        std::cout<<getAge()<<std::endl;
        std::cout<<getName()<<std::endl;

    }
};

int main(){

    Entity e1;
    std::cout << "\n\n\n\n";
    std::cout<<"_______________________________"<<std::endl;
    std::cout << "\n";



    e1.setName("Kamil");
    e1.setAge(19);
    e1.printPerson();


    std::cout<<"_______________________________"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"PART 2 - CONST TESTING"<<std::endl;
    std::cout<<"CHECK THE COMMENT ON THE CODE"<<std::endl;

    std::cout << "\n\n\n\n";




    const int MAX = 5; // Once I declare a variable as a const I cannot change it later
    int deVar = 12;

    //MAX = 10; // will result in compiler error because we previously promised that we would not be changing MAX;

    //Simplest use of const is this ^^^^^ I just say that I will not be changing the variable ever in the programme


    int* a = new int;

    //This creates a pointer pointing to a integer in the HEAP memory;

    //I can do two things to a right now one:

    *a = 94; //I can change the variable where the pointer is pointing at

    std::cout<<"a is pointing to:  "<<*a<<std::endl;

    delete a; // deletes the allocated memory for a in the HEAP
    a = nullptr; //Points a to a nullptr - even though this line might not be used it is good practice

    //Two

    a = &deVar; //I can change where the pointer is pointing at

    std::cout<<"a is pointing to:  "<<*a<<std::endl;

    //Now lets try to create a const pointer

    std::cout << "\n\n\n\n";



    std::cout<<"_______________________________"<<std::endl;
    std::cout << "\n\n\n\n";
    std::cout<<"PART 3 - CONST TESTING"<<std::endl;
    std::cout<<"CHECK THE COMMENT ON THE CODE"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Testing on const int*b = new int(49);"<<std::endl;
    std::cout<<std::endl;


    const int* b = new int(49);
    int opVar = 12;

    //This means that I cannot modify the contents of this pointer meaning I can change where it is pointing only


    std::cout<<"b is pointing to:  "<<*b<<std::endl;
    b = &opVar;
    std::cout<<"b is pointing to:  "<<*b<<std::endl;

    std::cout<<std::endl;

    std::cout<<"Only thing we can do is change where the pointer b is pointing to"<<std::endl;
    std::cout<<"We cannot change the content inside the pointers pointed memory"<<std::endl;

    std::cout<<"_______________________________"<<std::endl;
    std::cout << "\n\n\n\n";
    std::cout<<"PART 4 - CONST TESTING"<<std::endl;
    std::cout<<"CHECK THE COMMENT ON THE CODE"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Testing on  int* const c = new int(49);"<<std::endl;
    std::cout<<std::endl;


    int* const c = new int(49);

    //This means that I cannot modify the contents of this pointer meaning I can change where it is pointing only


    std::cout<<"b is pointing to:  "<<*c<<std::endl;
    *c = 12;
    std::cout<<"b is pointing to:  "<<*c<<std::endl;

    std::cout<<std::endl;

    std::cout<<"Only thing we can do is chang the content inside the memory the pointer is pointing at at"<<std::endl;
    std::cout<<"We cannot chang the point the pointer is pointing in the memory"<<std::endl;







}
