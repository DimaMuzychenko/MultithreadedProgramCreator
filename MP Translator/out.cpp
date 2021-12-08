#include <iostream> 
#include <map> 
#include <thread> 

std::map<std::string, uint32_t> context; 

void f_s1() 
{ 
context["a"] = 5;
context["b"] = context["a"];
std::cin >> context["a"];
std::cout << context["b"] << std::endl;
if (context["a"] == 9) 
{
std::cin >> context["b"];
} 
 else 
 {
if (context["a"] < 5) 
{
std::cout << context["a"] << std::endl;
} 
 else 
 {
context["a"] = 0;
std::cout << context["a"] << std::endl;
}
}
} 

void f_s2() 
{ 
context["a"] = 5;
context["b"] = context["a"];
std::cin >> context["a"];
std::cout << context["b"] << std::endl;
if (context["a"] == 0) 
{
std::cin >> context["b"];
} 
 else 
 {
if (context["a"] < 0) 
{
std::cout << context["a"] << std::endl;
} 
 else 
 {
context["a"] = 0;
std::cout << context["a"] << std::endl;
}
}
} 



int main() 
{ 
std::thread t1(f_s1); 
std::thread t2(f_s2); 

t1.join(); 
t2.join(); 
return 0; 
} 
