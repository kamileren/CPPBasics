//
// Created by Eren Avsar on 2023-11-06.
//

/*

 CONSTANTS REVISITED

 using a const we can take literal values instead of variables when using references as an input to a function
 However we promise that we will not change anything that we take into the function inside the function.
 */

/*

 AND/OR TRUTH TABLE

 && is the and
 || is the or





 ARRAYS


 int myIntArray[3] creates an array that store type int with a size of 3 (index from 0-2).
 myIntArray[0] = 1; initializes the index 0 of the myIntArray with 1.

 we can get the size of an array by getting the size of the whole array using sizeof(myIntArray) which is 12.
 we can then get the size of the first index using sizeof(myIntArray[0]) to get the size of the first index which is 4.
 we then divide the size of the whole array by the size of a single index which would mean we 3 int variables in myIntArray

 for(int i =0;i<(sizeof(myIntArray)/myIntArray[0]);i++){
    cout<<myIntArray[i];
    }

 */


#include <iostream>

int size((&std::string)[]);

int main(){

    std::string nameData[] = {"Kamil","Eren","Avsar"};

    std::string name;

    std::cout<<"Enter Your Name ; ";
    std::cin>>name;

    for(int i = 0; i < size(nameData);i++){
        if(nameData[i]==name){
            std::cout<<nameData[i]<<std::endl;
            break;
        }
    }
}







