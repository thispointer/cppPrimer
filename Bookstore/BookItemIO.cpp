#include <iostream>
#include "Sales_item.h"

template <typename T>
void swap(T& a, T& b)
{
  auto aux = std::move(a);
  a = std::move(b);
  b = std::move(aux);
}

int main (int argc, char *argv[])
{
    Sales_item book;


    //std::cin >> book; 

    //std::cout << book << std::endl;

    int a = 3;
    int b = 8;

    swap (a, b);

    std::cout << "a = " << a << " and b = " << b << std::endl;

    return 0;
}