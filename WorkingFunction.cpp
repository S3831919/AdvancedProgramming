#include <iostream>
#include <string>


int blah(int x, int y){ 

    int total = x + y + x + y;
    return total; 
}

int main()
{

int a = 5;
int b = 5; 

int sum = blah(a,b);

std::cout << sum; 


}


