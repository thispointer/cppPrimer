//
// Adding unknown number of input 
// 

 
 #include <iostream>

 int main (int argc, char *argv[])
 {
     int sum = 0;
     int number = 0;

     while (std::cin >> number)
     {
         sum += number;
     }

     std::cout << "Sum of input numbers is : " << sum << std::endl;
     
     return 0;
 }