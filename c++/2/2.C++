#include<iostream> 
// int main(void)
// {
//     std::cout << MyFuncTwo() << std::endl;    
//     std::cout << MyFuncTwo(3, 4) << std::endl;   
//     return 0;
// }



// int MyFuncTwo(int num1=5, int num2=7)
// {
//     return num1+num2;
// }



int Adder(int num1=1, int num2=2);

int main(void)
{
    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3, 5) << std::endl;
    return 0;
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}