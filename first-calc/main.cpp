#include <iostream>
using namespace std;


static int add(int first, int second) {
	return first + second;
}
static int substract(int first, int second) {
	return first - second;
}

static void printMenu() {
	cout << "Calculadora en consola        \n";
	cout << "==============================\n";
	cout << "Dadas las siguientes opciones:\n";
	cout << "1. Sumar\n";
	cout << "2. Restar\n";
	cout << "3. Multiplicar\n";
	cout << "4. Dividir\n";
	cout << "5. Potencia\n";
	cout << "6. Salir\n";
}

static int getChoiceByUser() {
	int choice;
	bool isValid = false;
	while (!isValid) {
		cout << "Ingrese una opcion valida (1 al 6): ";
		cin >> choice;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Opcion no valida. Por favor, intente de nuevo.\n";
		}
		else {
			isValid = (choice >= 1 && choice <= 6);
			if (!isValid) {
				cout << "Opcion no valida. Por favor, intente de nuevo.\n";
			}
		}
	}
	return choice;
}


static int getNumberByUser() {
	int number;
	bool isValid = false;
	while (!isValid) {
		cout << "Ingrese un numero valido: ";
		cin >> number;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Numero no valido. Por favor, intente de nuevo.\n"; 
		}
		else {
			isValid = true;
		}
		
	}
	return number;
}
static void testAdd() {
	int result1 = add(4, 6);
	cout << "Prueba #1, la suma es: " << result1 << endl;
	int result2 = add(15, -15);
	cout << "Prueba #2, la suma es: " << result2 << endl;
	int result3 = add(0, 98);
	cout << "Prueba #3, la suma es: " << result3 << endl;
}

static void testSubstract() {
	int result1 = substract(4, 6);
	cout << "Prueba #1, la resta es: " << result1 << endl;
	int result2 = substract(15, -15);
	cout << "Prueba #2, la resta es: " << result2 << endl;
	int result3 = substract(0, 98);
	cout << "Prueba #3, la resta es: " << result3 << endl;
}

static bool executeChoice(int userChoice, int firstNumber, int secondNumber) {
	int result = 0;
	bool needExit = false;
	switch (userChoice) {
	case 1:
		std::cout << "Ha seleccionado Sumar.\n";
		result = add(firstNumber, secondNumber);
		std::cout << "El resultado de la suma es" << result << ".\n";
		break;
	case 2:
		std::cout << "Ha seleccionado Restar.\n";
	    result = substract(firstNumber, secondNumber);
		std::cout << "El resultado de la resta es" << result << ".\n";
		break;
	case 3:
		std::cout << "Ha seleccionado Multiplicar.\n";
		//result = multiply(firstNumber, secondNumber); //NOTE: Function not implemented
		//std::cout << "El resultado de la multiplicacion es" << result << ".\n";
		break;
	case 4:
		std::cout << "Ha seleccionado Dividir.\n";
		// Llamada a función de división (por implementar)
		break;
	case 5:
		std::cout << "Ha seleccionado Potencia.\n";
		// Llamada a función de potencia (por implementar)
		break;
	case 6:
		std::cout << "Ha seleccionado Salir. Finalizando programa...\n";
		needExit = true;
		break;
	default:
		// Este caso no debería ocurrir gracias a la validación en getChoiceByUser
		std::cout << "Opción inválida. Esto no debería pasar.\n";
		needExit = true;
	}
	return needExit;
}
const int EXIT_OPTION = 6;

int main() {
	int userChoice;
	bool needExit = false;

	while (!needExit) {
		printMenu();
		int firstNumber = 0;
		int secondNumber = 0;
		userChoice = getChoiceByUser();

		if (userChoice != EXIT_OPTION) {
			firstNumber = getNumberByUser(); 
			secondNumber = getNumberByUser();
		} 
		
		needExit = executeChoice(userChoice,firstNumber, secondNumber); 
	}
	 
	return 0;
}