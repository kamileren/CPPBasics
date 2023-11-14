//
// Created by Eren Avsar on 2023-11-03.
//

/*

 -------FOR-LOOPS------

 In a for loop you know how many iterations you know are going to happen.

 for(int i=0;i<10;++i){


   std::cout<<i<<std::endl;

 }

for(initialize variable;stop condition: increment rule)

 looking at this we can say that these for the loop above:

 initialized variable : int i = 0;
 stop condition : i<10 ; check if i is less than 10 then loop
 increment rule : i is returned then incremented

 */


#include <iostream>

int main(){

    for(int i = 0; i<10;++i){
        std::cout<<i<<std::endl;

    }

//    std::string line(720/4,'#');
//
//    for(int i = 0;i<480/12;i++){
//        std::cout<<line<<std::endl;
//    }

    for(int i = 0; i < 10; ++i){
        for(int j = 0 ; j < 10 ; ++j){

            std::cout<<"i= "<<i<<std::endl<<"j= "<<j<<std::endl;
            std::cout<<std::endl;
        }
    }

    //Loops are very performance heavy so using them without thinking could be bad
    // Especially in Abstract Data Types such as List,Binary Tree Implementations we could be wasting a lot of
    // valuable memory and power.


}
