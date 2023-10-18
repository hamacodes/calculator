#include <iostream>
using std::cout; using std::cin;
#include <string>
using std::string;
#include <stringstream>
using std::istringstream; using std::ostringstream;




int maint(){
  string headerStr = "**********C A L C U L A T O R**********\n";
  string inputQ = "Enter calculation seperated by space: \n"
  cout << headerStr << inputQ;

  istringstream iss;
  cin >> iss;

  cout << iss; 

  
  

return 0;
}
