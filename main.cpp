#include <iostream>


class Calculator{
    public:
    double num1;
    double num2;


    bool set_num1(double num1){
        this ->num1 = num1;
         if (this ->num1 == 0) {return 0;}
        return 1;
    }

    bool set_num2(double num2){
        this ->num2 = num2;
         if (this ->num2 == 0) {return 0;}
        return 1;
    }
    double add(){
        return num1 + num2;
    }
    double multiply(){
        return num1 * num2;
    }
    double subtract_1_2(){
        return num1 - num2;
    }
    double subtract_2_1(){
        return num2 - num1;
    }
    double divide_1_2(){
        return num1 / num2;
    }
    double divide_2_1(){
        return num2 / num2;
    }
};


int main(){
    Calculator calc;
    double num1, num2;
    while(true){
        std::cout << "Enter number 1: " << std::endl;
        std::cin >> num1;
        calc.set_num1(num1);

        std::cout << "Enter number 2: " << std::endl;
        std::cin >> num2;
        calc.set_num2(num2);
        if(calc.set_num1(num1) == true && calc.set_num2(num2) == true){
        std::cout << "num1 + num2 " << calc.add() << std::endl;
        std::cout << "num1 * num2 " << calc.multiply() << std::endl;
        std::cout << "num1 - num2 " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 " <<calc.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 " <<calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 " <<calc.divide_2_1() << std::endl;
        }
        else{
            std::cout << "Wrong number" << std::endl;
        }        

    }

}