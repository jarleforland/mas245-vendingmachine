#include "vendingmachine.h" // Includes the header file for this class for class declaration visibility.
#include <iostream>
#include <string>

// Definition of VendingMachine constructor.
VendingMachine::VendingMachine(const std::string& owner)
    : sodaTypes_(), owner_(owner)  // Initialize the owner member variable.
{
    std::cout << "Vending machine object constructed!" << std::endl;
}


// Will be called when the object is deleted. Could do clean-up tasks here.
VendingMachine::~VendingMachine()
{
    // Do nothing.
}


// Add a Soda to the sodaTypes_ vector by using the vector push_back() method (function).
void VendingMachine::addType(Soda s)
{
    sodaTypes_.push_back(s);
}


// Print number of registered sodaTypes (types we added to the sodaTypes_ vector).
void VendingMachine::printInventory()
{
    std::cout << "Number of soda types registered: " << sodaTypes_.size() << std::endl;
}
void VendingMachine::printOwner() const
{
 std::cout<<owner_ <<" owns this machine"<<std::endl;

}






