#include <iostream>
#include <string>

//Between Base 2 - 10
unsigned long int AnyBaseConverter(int num, int base){
  if(base > 10){
    std::cout << "Base greater than 10 Entered. Exited.";
    return -1;
  }
  if(num >= base-1) return AnyBaseConverter(num/base, base)*10+num%base;

  return num;
}

int main(){
  int base;
  int num;
  std::cout << "Enter a base: ";
  std::cin >> base;

  std::cout << "Enter a number: ";
  std::cin  >> num;

  std::cout << AnyBaseConverter(num, base) << std::endl;
return 0;
}
