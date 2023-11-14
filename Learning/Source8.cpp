//
// Created by Eren Avsar on 2023-11-06.
//


/*

 FUNCTION OVERLOADING is when you have a single function and have multiple definition of that said function with different
 outputs.

 void printNumber(int num){
    cout<<num<<endl;
    }

 void printNumber(int fnum, int snum){
        cout<<fnum<<endl;
        cout<<snum<<endl;
}

 void printNumber( double num){    cout<<num<<endl;}
 void printNumber( string str){    cout<<str<<endl;}


 As we can see the function above printNumber has 4 overloads one where it prints two number another where it inputs double and another with
 string.

 We can say that the function printNumber function has 4 function overload.

 However if the only thing we change is the output it will not be enough to overload a function. Because in C++ return type is not enough
 to determine that something is an overload we need to change the input list.

 */


#include <iostream>


void print(std::string str);
void print(int num);
void print(std::string,std::string);
void print(int, std::string);


int main(){

    std::string name = "Kamil";
    int age = 19;

    print(name);
    print(age);
    print(name,"Eren");
    print(age,name);

}


void print(std::string str){
    std::cout<<str<<std::endl;
}

void print(int num){
    std::cout<<num<<std::endl;
}

void print(std::string str1,std::string str2){
    std::cout<<str1<<std::endl;
    std::cout<<str2<<std::endl;
}

void print(int i,std::string str){
    std::cout<<i<<std::endl;
    std::cout<<str<<std::endl;
}
