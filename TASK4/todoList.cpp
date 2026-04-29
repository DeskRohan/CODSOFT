#include <iostream>
#include <vector>
#include <string>
using namespace std;

void addTask(string task, vector<string>& list) {
    list.push_back(task);
}

void deleteTask(int index, vector<string>& list) {
    if (index >= 0 && index < list.size()) {
        list.erase(list.begin() + index);
        cout << "Task deleted successfully!\n";
    } else {
        cout << "Invalid index!\n";
    }
}

void showTasks(vector<string>& list) {
    cout << "\nTo-Do List:\n";

    if (list.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    for (int i = 0; i < list.size(); i++) {
        cout << i + 1 << ". " << list[i] << endl;
    }
}

int menu() {
    int choice;

    cout << "\n1. Add Task\n";
    cout << "2. Delete Task\n";
    cout << "3. Show Tasks\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";

    cin >> choice;
    cin.ignore();

    return choice;
}

int main() {
    vector<string> list;
    string task;
    int choice, index;

    while (true) {
        choice = menu();

        if (choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            addTask(task, list);
        }
        else if (choice == 2) {
            showTasks(list);
            cout << "Enter task number to delete: ";
            cin >> index;
            cin.ignore();
            deleteTask(index - 1, list);
        }
        else if (choice == 3) {
            showTasks(list);
        }
        else if (choice == 4) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
