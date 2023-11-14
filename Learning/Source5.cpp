//
// Created by Eren Avsar on 2023-11-02.
//

/*Increment Operators

int i = 1;

i+=1; 'i' is now 2 because it adds one into itself
i-=1; 'i' is now 1 because it subtracts one from itself
i*=6; 'i' is now 6 since it multiplies i by 6
i/=3; 'i' is now 2 since it is dived by 3
i%=1; 'i' is now 0 since the remainder of i/2 is 0

Preincrement Operator - Technically better in terms of optimization

++i adds one to i
--i subtracts one from i

First Increment i by 1
Returns the result

Postincrement Operator
i++ adds one to i
i-- subtracts one from i

First returns the variable
Then increment i by 1

*/

#include <iostream>

int main(){

//    int i = 3;
//    float j = 3.0;
//    i+=3; // adds 3 to i;
//    j/=i;
//    int k = j/i; //Implicit conversion of float to integer
//
//    std::cout<<i<<std::endl;
//    std::cout<<j<<std::endl;
//    std::cout<<k<<std::endl;


    int i = 4;

    std::cout<<"Integer is currently; "<<i<<std::endl;
    std::cout<<std::endl;




    //i--; //does not matter if we use --i; in this case since we return it before we reach next line however could be
    // important on loops;

    std::cout<<--i<<std::endl; //will return i-1
    std::cout<<i--<<std::endl; //will return i ( same as above) then subtract one from it
    std::cout<<i<<std::endl; // will return i subtracted one due to the post increment above;


    i = 0;

    std::cout<<std::endl;
    std::cout<<"Integer is currently; "<<i<<std::endl;
    std::cout<<std::endl;


    std::cout<<"i++ Currently; "<<i++<<std::endl;

    std::cout<<"i Currently; "<<i<<std::endl;

    std::cout<<"++i Currently; "<<++i<<std::endl;

    std::cout<<"i Currently; "<<i<<std::endl;

    // As we can see in the output of the code above post incrementing first returns what is in i then adds one to it
    //Pre increment first adds in to i then returns it.


}

