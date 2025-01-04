//
// Created by Sajjad Hossain on 1/3/2025.
//

#include "ToDoList.h"
#include <string>
#include <algorithm>

using namespace std;

void ToDoList::addTask(const string &title, const string &description) {
    tasks.emplace_back(title, description);
    cout << "Task added successfully\n";
}

void ToDoList::removeTask(int id) {
    auto it = remove_if(tasks.begin(), tasks.end(), [id](const Task& t)
    {
        return t.getId() == id;
    });
    if (it != tasks.end()){
        tasks.erase(it, tasks.end());
        cout << "Task remove successfully!"<< endl;
    }
    else{
        cout << "Task not found!";
    }

}

void ToDoList::markTaskComplete(int id) {
    auto it = find_if(tasks.begin(), tasks.end(), [id](const Task& t)
    {
        return t.getId() == id;
    });
    if (it != tasks.end()){
        it->markComplete();
        cout << "Mark Task as completed\n";
    }
    else{
        cout << "Task Not found";
    }
}

void ToDoList::displayTasks() const {
    if (tasks.empty()){
        return;
    }
    for (const auto& task : tasks){
        task.display();
    }
}
