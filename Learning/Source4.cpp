//
// Created by Eren Avsar on 2023-11-02.
//

/*
Identifier - A name assigned to a program element:
- variable
- type
- function
- namespace
- template
-class

Myint != myInt they are case-sensitive

IllegalIdentifier:

$Myint
32MyChar
My-Bool
+data+
**special**

-------Functions-------

int myFunction(int Param1,int Param2){ //<--- These will be deleted when they get out of scope
    int local_var;
    local_var = Param1 + Param2  //<---- These as well
    std::cout<<local_var<<std::endl;
    return local_var; <--- all functions need to always return something even if return type is void
    }

int main_var = myFunction(2,3);
int main_var2(myFunction(main_var,4)); //Again does the same thing as main_var initialization.
myFunction(main_var,main_var2); <--- this does not return to any other variable hence the local_var is gone from memory
 after c outing the local_var in the function.

 ^^^ The output will be :

 5
 9
 14

-------------------------
*/

#include <iostream>

void print(std::string text){
    std::cout<<text<<std::endl;
}

int main(){

    print("Whats Up");

}
