#include <iostream> 
#include <map> 
#include <thread> 
#include <mutex> 

std::map<std::string, uint32_t> context; 

std::mutex mtx; 

uint32_t& GetVar(const std::string& varName) 
{ 
return context[varName]; 
} 

void SetVar(const std::string& varName, uint32_t val)
{
mtx.lock();
GetVar(varName) = val;
mtx.unlock();
}
uint32_t GetVarVal(const std::string& varName)
{
mtx.lock();
uint32_t val = GetVar(varName);
mtx.unlock();
return val;
}
void f_s1() 
{ 
SetVar("a", 5);
SetVar("b", GetVarVal("a"));
uint32_t temp;
std::cin >> temp;
SetVar("a", temp); 
std::cout << GetVarVal("b") << std::endl;
if (GetVarVal("a") == 9) 
{
uint32_t temp;
std::cin >> temp;
SetVar("b", temp); 
} 
 else 
 {
if (GetVarVal("a") < 5) 
{
std::cout << GetVarVal("a") << std::endl;
} 
 else 
 {
SetVar("a", 0);
std::cout << GetVarVal("a") << std::endl;
}
}
} 

void f_s2() 
{ 
SetVar("a", 5);
SetVar("b", GetVarVal("a"));
uint32_t temp;
std::cin >> temp;
SetVar("a", temp); 
std::cout << GetVarVal("b") << std::endl;
if (GetVarVal("a") == 0) 
{
uint32_t temp;
std::cin >> temp;
SetVar("b", temp); 
} 
 else 
 {
if (GetVarVal("a") < 0) 
{
std::cout << GetVarVal("a") << std::endl;
} 
 else 
 {
SetVar("a", 0);
std::cout << GetVarVal("a") << std::endl;
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
