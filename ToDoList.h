//
// Created by Sajja on 1/3/2025.
//

#ifndef TODOLIST2025_TODOLIST_H
#define TODOLIST2025_TODOLIST_H

#include "Task.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
public:
    void addTask(const string& title, const string& description);
    void removeTask(int id);
    void markTaskComplete(int id);
    void displayTasks() const;
private:
    vector<Task> tasks;
};


#endif //TODOLIST2025_TODOLIST_H
