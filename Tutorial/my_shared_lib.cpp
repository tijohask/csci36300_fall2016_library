// my_shared_lib.cpp

#include "my_shared_lib.h"

#include <iostream>

// Print Message          
void print_message (const std::string & msg)
{	
	std::cout << msg << std::endl;
} 

// Default Constructor 
Greeting::Greeting (void) { }

// Default Destructor
Greeting::~Greeting (void) { }      

// Say Message - Error Format
void Greeting::say_message (const std::string & msg)
{    
	std::cerr << msg << std::endl;
}
