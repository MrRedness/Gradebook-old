#include <iostream>
#include <thread>

int main()
{
    using namespace std::chrono_literals;
    std::cout << "Welcome to the Gradebook \n";
    std::this_thread::sleep_for(1s);
    std::cout << "Would you like to... \n";
    std::this_thread::sleep_for(1s);
    std::cout << "Add a Student? (type add) \n";
    std::this_thread::sleep_for(1s);
    std::cout << "Check Student Info? (type check) \n";
    std::this_thread::sleep_for(1s);
    std::cout << "Or input grades? (type input) \n";

    std::string choice;
    std::cin >> choice;

    if (choice == "add" || "Add")
    {
        
    }
    else if (choice == "check" || "Check")
    {

    }
    else if (choice == "input" || "Input")
    {

    }
}