#include <iostream>
#include <string>
#include <cstdio>
int main(int argc, const char* argv[])
{

  std::string name;
  std::cout << "Qual seu noime? ";
  std::cin >> name;
  std::cout << "Iae manu " << name  << "! de boa manu?\n";
  std::rename(argv[0], std::string("manu_"+name).c_str());
  return 0;
}
