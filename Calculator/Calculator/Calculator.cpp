#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "russian");

	std::string userChoiseOperations = "";
	float firstUserNumber;
	float secondUserNumber;

	std::cout << "Выберите операцию нажав на соотвестующий символ: \n[+] - сумма, [-] - разность," <<
		"\n[*] - произведение, [/] - частное" << std::endl;
	std::cin >> userChoiseOperations;

	std::cout << "Введите первое число" << std::endl;
	std::cin >> firstUserNumber;

	std::cout << "Введите второе число" << std::endl;
	std::cin >> secondUserNumber;

	if (userChoiseOperations == "+")
		std::cout << "Результат: " << firstUserNumber + secondUserNumber;
	else if (userChoiseOperations == "-")
	{
		std::cout << "Результат: " << firstUserNumber - secondUserNumber;
	}
	else if (userChoiseOperations == "*")
	{
		std::cout << "Результат: " << firstUserNumber * secondUserNumber;
	}
	else if (userChoiseOperations == "/")
	{
		std::cout << "Результат: " << firstUserNumber / secondUserNumber;
	}
	else
	{
		std::cout << "ОШИБКА!";
	}
}
