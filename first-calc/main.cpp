#include <iostream>
using namespace std;
 

static int add(int first, int second) {
	return first + second;
}
static int substract(int first, int second) {
    return first - second;
}

static void printMenu() {
    std::cout << "Calculadora en consola        \n";
    std::cout << "==============================\n";
    std::cout << "Dadas las siguientes opciones:\n";
    std::cout << "1. Sumar\n";
    std::cout << "2. Restar\n";
    std::cout << "3. Multiplicar\n";
    std::cout << "4. Dividir\n";
    std::cout << "5. Potencia\n";
    std::cout << "6. Salir\n";
}

static void testAdd() {
    int result1 = add(4, 6);
    std::cout << "Prueba #1, la suma es: " << result1 << std::endl;
    int result2 = add(15, -15);
    std::cout << "Prueba #2, la suma es: " << result2 << std::endl;
    int result3 = add(0, 98);
    std::cout << "Prueba #3, la suma es: " << result3 << std::endl;
}

static void testSubstract() {
    int result1 = substract(4, 6);
    std::cout << "Prueba #1, la resta es: " << result1 << std::endl;
    int result2 = substract(15, -15);
    std::cout << "Prueba #2, la resta es: " << result2 << std::endl;
    int result3 = substract(0, 98);
    std::cout << "Prueba #3, la resta es: " << result3 << std::endl;
}

int main() {
    printMenu();  
    return 0;
}