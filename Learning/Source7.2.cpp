//
// Created by Eren Avsar on 2023-11-04.
//

#include <iostream>


void addExc(std::string str);

void changeName(std::string& username);



int main(){

    std::string myStr = "Kamil";

   // string& myRef = myStr;

    //cout<<myStr<<endl; //output will be Kamil
    //cout<<myRef<<endl; //output will be Kamil

    //myRef+= " Eren";

    //cout<<myStr<<endl; //output will be Kamil Eren
    //cout<<myRef<<endl; //output will be Kamil Eren

    // This is because both variables point to the same place in the memory changing one will change the other

    addExc(myStr);
    std::cout<<myStr<<std::endl; //will not edit Kamil because the function above was passed by a string literal;

    changeName(myStr);
    std::cout<<myStr<<std::endl; //will edit Kamil because the function above was passed by reference;


    //changeName("Kamil"); //this will not work since "Kamil" is a string literal not a string reference the function is awaiting
    //"Kamil" is an array of 6 const characters (last is null);
    //you also do now their memory adress you just know they are literal constants of whatever they are


}

void addExc(std::string str){ //this is a placeholder variable hence it is only initialized using a copy
    str+="!!";
}


void changeName(std::string& username){
    std::cout<<"Enter your new username:  ";
    std::cin>>username;
}



