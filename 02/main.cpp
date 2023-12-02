#include <iostream>
#include "сounter.h"
#include <string>

using namespace std;

int main(int argc, char** argv) {
	system("chcp 1251");
	string user_command;
	Counter counter;
	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	cin >> user_command;
	if (user_command == "да" || user_command == "Да")
	{
		int counter_value;
		cout << "Введите начальное значение счётчика: ";
		cin >> counter_value;

		counter = Counter(counter_value);
	}


	while (user_command != "х") {
		cout << "Введите команду ('+', '-', '=' или 'х'): ";
		cin >> user_command;
		if (user_command == "+")
		{
			counter.increment_counter();
		}
		else if (user_command == "-")
		{
			counter.decrement_counter();
		}
		else if (user_command == "=")
		{
			cout << counter.print_counter_state() << endl;
		}
		else if (user_command == "х")
		{
			cout << "До свидания!" << endl;
		}
	}
    return 0;
}

