//
// Created by Eren Avsar on 2023-11-02.
//


#include <iostream> //input - output stream: stream refers to streams of data we are sending and receiving.


int main(){

    char myCharacter;
    //variable named myCharacter in type char is declared but not initialized yet
    myCharacter = 'k';
    /* the variable is now initialized using the assignment operator ( = )
    myCharacter cannot hold more than one character because we declared it using a char
    meaning that we only reserved space in the memory for one char only */

    int myInt;
    myInt = 12;

    std::cout << myCharacter<<std::endl<<myInt<<std::endl; // the c out command is used to print on the terminal
    // std::endl has the same use as using "\n"

    /* Primitives in CPP

    int, short, long, char and bool

    int is 4bytes is floating point datatype
    short is less than 4bytes and is a type of int and has float floating point
    long is larger than 4bytes ( usually double of int)
    char and bool uses 1bytes

    floating point meaning ex number = 7289 the computer sees this as 7.289e3 the computer floats
    the decimal point to the left to get a more detailed look into the number*/

    /*system("pause") - Pauses the code and waits input from the user before continuing
    however does not work on macos*/



    /*

    Expression combines things, returns a value ex "2+2", "hello"

    Statement executes in sequence carries out some action ex "int x;"

    Expression Statement is when an expression is assigned to an expression for ex: "x = 4;"


    Truth Values

    0 is false
    1 is true
    -1 is true
    00 is false
    0.00 is false
    0.0000001 is true

    Anything other than 0 in the computer is true to the computer


    Relational Operators

    > greater than
    < less than
    >= greater than or equal
    <= less than or equal
    == equal to
    != not equal to
    ! negation operator





    */

}
