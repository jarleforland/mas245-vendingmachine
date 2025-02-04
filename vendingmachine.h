
// This is the include guard. It makes sure that the header is included only once per compilation unit.
// Without include guards we will run into "redefinition" errors.
#ifndef VENDINGMACHINE_H // Use file name with CAPITALIZED letters and underscore _ for dots.
#define VENDINGMACHINE_H

#include <vector>
#include <soda.h>
#include <string>


// Declare class VendingMachine
class VendingMachine
{

public:

    // Constructor.
    VendingMachine(const std::string& owner);
    std::string getowner() const;
    // Destructor.
    ~VendingMachine();

    // Member function. Returns nothing and takes one parameter of type Soda.




void addType(Soda s);
void printOwner() const;
// Member function. Returns nothing and takes no parameters.
    void printInventory();


private:

    // One private variable of type std::vector<Soda> (vector of Soda elements).
    // Using underscore in front or after member variable names. Trailing underscore is a
    // good idea due to reserved names starting with __ and because auto completion of names
    // will work more smoothly.
    std::vector<Soda> sodaTypes_;
    std::string owner_; // Add owner ass private member
};


// End of include guard ("redefinition protection").
#endif // VENDINGMACHINE_H
