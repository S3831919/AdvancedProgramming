#include <iostream>
#include <string>

int main()
{

    int x = 0;
std::cout << "Please enter a number: "; 
std::cin >>  x;
while(x < 0){
    std::cout << "Please enter a number greater that zero: ";
    std::cin >>  x;
} 
    std::cout << x;


}