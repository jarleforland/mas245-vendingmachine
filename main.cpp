
#include <cstdlib>              // Exit codes for main.
#include <iostream>             // std::cout

#include "soda.h"               // Include Soda class header (makes class declaration visible).
#include "vendingmachine.h"     // Include VendingMachine clase header (makes class declaration visible).


// This is a C++ style comment. Compiler will ignore all comments.


// The C++ program starts execution here.
int main()
{
    // Print a message at startup.
    std::cout<<"starting up"<<std::endl;
    // Create vendingMachine object. Constructor will be called with no parameters.
    VendingMachine vendingMachine ("Ett jævla fittetryne");
    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();


    // Create a cola object. Constructor will be called with given parameters.
    Soda cola("Colabrus", 34, 4);
    // We have a variable named cola with Soda as its data type.
    Soda fanta ("fanta",34,1);
    // Call the VendingMachine addType function with cola variable as parameter.
    vendingMachine.addType(cola);
    vendingMachine.addType(fanta);
    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();
    vendingMachine.printOwner();


    // Print a message just before exiting.
    std::cout << "* * *" << std::endl;
    std::cout << "Vending machine shutting down ... BYE!" << std::endl << std::endl;


    // Signal "no error occured" to the world outside our small application.
    return EXIT_SUCCESS; // Could also return 0 but this is the most correct way...
}
