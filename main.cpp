#include <iostream>

#include "ToDoList.h"

using namespace std;

int main(){
    ToDoList todo;
    int choice;

    do {
        cout <<"To do list manu"<<endl;
        cout << "1.Add Task " <<"2.Remove Task "
            << "3.Mark as Completed " <<"4.Display Task "<<
            "5. Exit"<< endl;
        cout <<"Choose an option: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1){
            string title, description;
            cout << "Enter title: ";
            getline(cin, title);
            cout << "Enter Description: ";
            getline(cin, description);
            todo.addTask(title, description);
        }
        else if(choice == 2){
            int id;
            cout << "Enter ID: ";
            cin >> id;
            todo.removeTask(id);
        }
        else if(choice == 3){
            int id;
            cout << "Enter ID; ";
            cin >> id;
            todo.markTaskComplete(id);
        }
        else if(choice == 4){
            todo.displayTasks();
        }
    } while (choice != 5);
    cout << "Exiting...!\n";

    return 0;
}