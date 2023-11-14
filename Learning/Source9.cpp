//
// Created by Eren Avsar on 2023-11-06.
//


/*

 WHAT ARE STRING IN C++

 C-STYLE STRINGS;

 - Null terminated char arrays
 - must end with "\0", the null character
 - char hue[4] = {'r','e','d','\0'}
 - The null character in the end tells the array to stop reading.

 C++ STYLE STRINGS:


 #include <string> is under name space std which is under #include <iostream>

 we use it as string or std::string ( right if we are not using the standart name space


 treat strings like variables such as int, char,etc (like declaration int number ---> string str)

 initialized with an assigment operator equal sign =

 can append using +=, -= and the operation as such.

 */


#include <iostream>

int main(){

    char CString[6] = {'E','r','e','n','\0'};

    char CString2[6] = "Eren"; //Automatically assign the null character in the end

    std::cout<<CString<<std::endl;
    std::cout<<CString2<<std::endl;

    std::string fName;
    std::string mName;
    std::string lName;
    fName = "Kamil";
    mName = " Eren";
    lName = " Avsar";

    std::string fullName = fName+mName+lName;

    std::cout<<fullName<<std::endl;

}