#include <iostream>
#include <string>
#include <sstream>

#include "Calculator.h"
#include "Operations.h"


void Calculator::run() {
  std::string input;
  double num1, num2;
  char op;

  std::cout << "Alas, Hama's CPP Calculator\n";
  std::cout << "Enter expressions in the format: [number] [operator] [number]\n";
  std::cout << "For example: 3 + 4\n";
  std::cout << "Type 'exit' to quit.\n";

  while (true) {
    std::cout << "> ";
    std::getline(std::cin, input);  // Grab the user input

    // Exit condition
    if (input == "exit") {
      break;
    }

    // Parse the user input
    std::istringstream iss(input);

    // Invalid input checking
    if (!(iss >> num1 >> op >> num2)) {
      std::cout << "Invalid input. Please enter in '[number] [operator] [number]' format.\n";
      continue;
    }

    double result;
    bool validOperation = true;

    // Perform the operation
    switch(op) {
      case '+':
        result = add(num1, num2);
        break;
      case '-':
        result = subtract(num1, num2);
        break;
      case '*':
        result = multiply(num1, num2);
        break;
      case '/':
        if (num2 == 0) {
          std::cout << "Error! Division by zero is undefined.\n";
          validOperation = false;
        } else {
          result = divide(num1, num2);
        }
        break;
      default:
        std::cout << "Unknown operator: " << op << "\n";
        validOperation = false;
        break;
    }

    // Display the result
    if (validOperation) {
      std::cout << "Result: " << result << "\n";
    }
  }

  // Exit or stop program message:
  std::cout << "Goodbye!\n";
}