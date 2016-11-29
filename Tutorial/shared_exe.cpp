// shared_exe.cpp

#include "my_shared_lib.h"    

// Driver Method
int main (int argc, char * argv [])
{	
	// We can print the message here 
	// due to the library...	
	print_message ("Hello, World!");      	
	
	// Here we have to create a new 
	// instance in order to print the 
	// "error" message.    
	Greeting g;    
	g.say_message ("Hello, World!");          	
	return 0;
}
