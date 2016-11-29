// my_shared_lib.h    
#include <string>      

// Include the Export Header
#include "my_shared_lib_export.h"          

// Shared Library Method
MY_SHARED_LIB_Export
void print_message (const std::string & msg);   

// Shared Library Class   
class MY_SHARED_LIB_Export Greeting
{
    public:		
	Greeting (void);		
	~Greeting (void);      		
	void say_message (const std::string & msg);
};
