/*  This an example of multiline comment
    Name : Vanshaj Barnwal
    Organization : Unschool
    Objective : Demonstrate basic structure of a C program
*/
// This is a single comment
#include <headerfile.h> /*.h rep Header file is a file in which def of all the predefined func are prsnt
include means to inculcate same as include in normal eng
# is preprocessor directive tells compiler before starting the program first do these specific task befor anything else*/
#define pi 3.149 //eg of Macro(wherever pi written replaced by 3.14). constant func declared can be dec outside function
int variable;//global dec->can be used by any of d func and anywhere
int main()//main part of d program compiler starts executes from d main func
{
    cout << "Hello world!" << endl;
    return 0;/*that the program is executed successfully anything other than 0 is error machine only understands 0 and 1
    i.e.0 all ok and non zero error*/
}
