#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using std::cout; 
using std::cin;
using std::string;

#define getline(x, y) std::getline(x, y)

void create() {

}

int main() {
	string tdl_input; // tdl_input (stands for todo-line input) takes the command given by the user

	cout << "todo-line> ";
	cin >> tdl_input;

	if (tdl_input == "help") {
		cout << "\nhelps: shows all the commands for todo-line" << '\n' << '\n' << '\n';
		cout << "create <todo-list-name> creates a hidden file for the user to add todo's in" << '\n' << '\n' << '\n';
		cout << "show: shows all the todo-lists" << '\n' << '\n' << '\n';
		cout << "show <todo-list-name>: shows all the things added to the selected todo-list" << '\n' << '\n' << '\n';
		cout << "add <todo-id> (todo-name> <todo-list-name>: adds the todo to the selected todo-list" << '\n' << '\n' << '\n';
		cout << "delete <todo-id> <todo-list-name>: removes the todo with the given id from the given todo-list" << '\n' << '\n' << '\n';
		cout << "check (todo-id> <todo-list-name>: checks the todo with the given todo id in the given todo-list (adds '✓' to the todo-id)" << '\n' << '\n' << '\n';
		cout << "uncheck <todo-id> (todo-list-name> uncheks the todo with the given todo id in the given todo-list (removes the '✓' from the todo-id)" << '\n' << '\n' << '\n';
		cout << "exit: exits todo-line" << '\n' << '\n' << '\n'; 
		cout << "clear: clears all the output" << '\n' << '\n' << '\n';
		cout << "rename <todo-id> <todo-list-name>: renames the todo with the given todo-id in the given todo-list" << '\n' << '\n' << '\n';
		cout << "NOTE: Please do not add any spaces when you make a todo-list or a todo-id. It might not work properly" << '\n' << '\n' << '\n';
		main();
	}
	else if (tdl_input == "exit") {
		cout << "Exitning todo-line\n";
	}
	else if (tdl_input == "clear") {
		#if defined (_WIN32)
			system("cls");
		#else 
			system("clear");
		#endif
		main();
	}
	else if (tdl_input == "create") {

		main();
	}
	else {
		cout << "Error: \"" << tdl_input << "\" is not a command. Type \"help\" to get a list of all the commands\n";
		main();
	}
	return 0;
}
