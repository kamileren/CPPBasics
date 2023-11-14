//
// Created by Eren Avsar on 2023-11-04.
//
#include <iostream>

class Entity {

private:
    int X;
    int* Y;
    mutabel int var;

    int* x,*y;// If I want to make both a pointer there needs to be a pointer in the second variable as well else it is just an int
public:
    int getX() const {


        var = 15; // as we can see we can change the values of this code even though we are inside a const method this is because the
        // variable var has the keyword mutable.
        // mutable allows to variable to change when under a scope that is const.

        return X;
        //The const in the method means that this function will not modify anything in the class variables;
        // ex: I cannot say that return x-2 or x+2 I can only read the data.


    }

    const int* const getY() const { //This means we are turning a pointer and the contents and the location of the pointer cannot be modified
        // and this function will not modify the Entity class;
        return Y;
    }

    void SetX(int locx){
        x = locx;
    }
};



void printEntityOld(Entity e){
    // This is bad because it is copying the whole entity class to check it instead we should use references
    std::cout << e.getX() <<std::endl;
}

void printEntity(const Entity& e){
    //This is better new we are getting a pointer to the memory address of that specific Entity that is calling this function
    //Also now since it is const it also helps us so that it does not change the reference that is given(can also use pointer)
    //It is even more important with references because with references you are the content you are not just a pointer to it
    // changing that variable can cause data mismatch

    std::cout << e.getX() <<std::endl;

    // If we assume .getX() is not a const method that would mean I cannot call that either because this method promises it will
    // change the values of the Entity reference e however since .getX() does not promise that meaning that function would not be allowed
    // in the method print Entity
}



int main(){

    Entity e;

    const int A = 5;
    const int B = 10;

    //A = 2; //I can change A to any value I want
    //B = 12; will not compile because we have disallowed b to be changed when we used the keyword const


    const int* a = new int; // This means that I can not change the variable where the pointer is pointing at, but I can change the pointer

    //int* const a = new int; // This meas that I can change what the variable, but I cannot change where it is pointing

    //int const*  a = new int; // This is the same as const int* a = new int;

    // we can also make a combination of both lie :    const int* const a;



    //*a = 12; //changes the value where the pointer is pointing to //this will not work if the pointer a is a const
    //a = B; // will not work since B is a constant and we cannot point at it however what we can do is:

    printEntity(e);

    std::cout <<*a<<std::endl;

}


/*FINAL NOTES


 const int* A = b;
 int const* A = b;

 This means that A is pointer to an integer that is constant
                            or
     A is a pointer to a constant that is an integer

WHAT DO THEY MEAN??

 These mean that they point to a variable for example b. A is pointing to b and b is a constant variable meaning what we cannot
 change the value of the memory A is pointing to using dereference *A=12; <----- This will not work it will result in compile error














 */